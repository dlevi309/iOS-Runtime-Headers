/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUImageModifier.h>

@interface SUClipCornersImageModifier : SUImageModifier {

	double _cornerRadius;
	int _corners;

}

@property (assign,nonatomic) double cornerRadius;              //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) int corners;                      //@synthesize corners=_corners - In the implementation block
-(double)cornerRadius;
-(int)corners;
-(void)setCorners:(int)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)drawBeforeImageForContext:(CGContextRef)arg1 imageFrame:(CGRect)arg2 finalSize:(CGSize)arg3 ;
-(void)drawAfterImageForContext:(CGContextRef)arg1 imageFrame:(CGRect)arg2 finalSize:(CGSize)arg3 ;
-(CGPathRef)_copyClippingPathForRect:(CGRect)arg1 ;
@end

