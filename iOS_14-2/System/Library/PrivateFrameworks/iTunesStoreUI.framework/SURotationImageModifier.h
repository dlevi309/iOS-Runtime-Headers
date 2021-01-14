/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUImageModifier.h>

@interface SURotationImageModifier : SUImageModifier {

	float _degrees;
	long long _orientation;

}

@property (assign,nonatomic) float degrees;                      //@synthesize degrees=_degrees - In the implementation block
@property (assign,nonatomic) long long orientation;              //@synthesize orientation=_orientation - In the implementation block
-(float)degrees;
-(long long)orientation;
-(BOOL)isEqual:(id)arg1 ;
-(void)setOrientation:(long long)arg1 ;
-(void)drawBeforeImageForContext:(CGContextRef)arg1 imageFrame:(CGRect)arg2 finalSize:(CGSize)arg3 ;
-(CGRect)imageFrameForImage:(id)arg1 currentFrame:(CGRect)arg2 finalSize:(CGSize)arg3 ;
-(void)setDegrees:(float)arg1 ;
@end

