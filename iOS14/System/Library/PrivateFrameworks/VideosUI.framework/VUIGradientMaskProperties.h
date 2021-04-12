/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


#import <VideosUI/VideosUI-Structs.h>
@interface VUIGradientMaskProperties : NSObject {

	CGSize _minLengths;
	UIEdgeInsets _minPadding;

}

@property (assign,nonatomic) UIEdgeInsets minPadding;              //@synthesize minPadding=_minPadding - In the implementation block
@property (assign,nonatomic) CGSize minLengths;                    //@synthesize minLengths=_minLengths - In the implementation block
+(id)defaultGradientMaskProperties;
-(UIEdgeInsets)minPadding;
-(CGSize)minLengths;
-(void)setMinPadding:(UIEdgeInsets)arg1 ;
-(void)setMinLengths:(CGSize)arg1 ;
@end

