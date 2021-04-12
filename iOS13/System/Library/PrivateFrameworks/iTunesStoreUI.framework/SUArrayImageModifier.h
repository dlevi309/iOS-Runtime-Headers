/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUImageModifier.h>

@class NSArray;

@interface SUArrayImageModifier : SUImageModifier {

	NSArray* _modifiers;

}

@property (nonatomic,retain) NSArray * modifiers;              //@synthesize modifiers=_modifiers - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)modifiers;
-(void)setModifiers:(NSArray *)arg1 ;
-(void)drawBeforeImageForContext:(CGContextRef)arg1 imageFrame:(CGRect)arg2 finalSize:(CGSize)arg3 ;
-(void)drawAfterImageForContext:(CGContextRef)arg1 imageFrame:(CGRect)arg2 finalSize:(CGSize)arg3 ;
-(BOOL)scalesImage;
-(CGSize)finalSizeForSize:(CGSize)arg1 originalSize:(CGSize)arg2 ;
-(CGRect)imageFrameForImage:(id)arg1 currentFrame:(CGRect)arg2 finalSize:(CGSize)arg3 ;
@end

