/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/


@interface OBNavigationBarDisplayState : NSObject {

	double _backgroundOpacity;
	double _titleOpacity;

}

@property (assign,nonatomic) double backgroundOpacity;              //@synthesize backgroundOpacity=_backgroundOpacity - In the implementation block
@property (assign,nonatomic) double titleOpacity;                   //@synthesize titleOpacity=_titleOpacity - In the implementation block
+(id)displayStateForNavigationBar:(id)arg1 ;
-(double)backgroundOpacity;
-(double)titleOpacity;
-(void)setTitleOpacity:(double)arg1 ;
-(void)applyState:(id)arg1 ;
-(id)initWithNavigationBar:(id)arg1 ;
-(void)setBackgroundOpacity:(double)arg1 ;
@end

