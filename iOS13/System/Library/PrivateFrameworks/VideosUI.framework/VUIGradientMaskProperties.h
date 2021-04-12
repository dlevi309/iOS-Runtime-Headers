/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setMinPadding:(UIEdgeInsets)arg1 ;
-(CGSize)minLengths;
-(void)setMinLengths:(CGSize)arg1 ;
@end

