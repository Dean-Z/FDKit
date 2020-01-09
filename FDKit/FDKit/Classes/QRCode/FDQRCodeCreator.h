//
//  FDQRCodeCreator.h
//  Aaru
//
//  Created by Jason on 2019/4/3.
//  Copyright © 2019 Jason. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreImage/CoreImage.h>
#import <UIKit/UIKit.h>

@interface FDQRCodeCreator : NSObject

+ (UIImage *)qrCodeImageWithContent:(NSString *)content size:(CGFloat)size;

@end
