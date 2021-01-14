/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/


#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
@interface SUImageModifier : NSObject

@property (nonatomic,readonly) BOOL scalesImage; 
-(id)newImageForImage:(id)arg1 ;
-(void)drawBeforeImageForContext:(CGContextRef)arg1 imageFrame:(CGRect)arg2 finalSize:(CGSize)arg3 ;
-(void)drawAfterImageForContext:(CGContextRef)arg1 imageFrame:(CGRect)arg2 finalSize:(CGSize)arg3 ;
-(BOOL)scalesImage;
-(CGSize)finalSizeForSize:(CGSize)arg1 originalSize:(CGSize)arg2 ;
-(CGRect)imageFrameForImage:(id)arg1 currentFrame:(CGRect)arg2 finalSize:(CGSize)arg3 ;
@end

