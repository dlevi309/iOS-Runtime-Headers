/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


#import <ContactsUI/ContactsUI-Structs.h>
@interface CNAvatarImageUtilities : NSObject
+(UIEdgeInsets)transparencyInsetsForImage:(id)arg1 requiringFullOpacity:(BOOL)arg2 ;
+(CGRect)centeredSquareCropRectInRect:(CGRect)arg1 ;
+(id)trimmedImageByTrimmingTransparentPixelsFromImage:(id)arg1 ;
+(CGRect)scaledCropRect:(CGRect)arg1 fromSize:(CGSize)arg2 toSize:(CGSize)arg3 ;
+(id)trimmedImageByTrimmingTransparentPixelsFromImage:(id)arg1 requiringFullOpacity:(BOOL)arg2 ;
+(CGRect)adjustedSquareCropRect:(CGRect)arg1 toFitImageOfSize:(CGSize)arg2 ;
+(CGRect)intersectingSquareCropRect:(CGRect)arg1 forRect:(CGRect)arg2 ;
+(id)croppedAndCenteredAvatarImageForImage:(id)arg1 widthMultiplier:(double)arg2 ;
@end

