/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/


@interface OBNavigationBarDisplayState : NSObject {

	double _backgroundOpacity;
	double _titleOpacity;

}

@property (assign,nonatomic) double backgroundOpacity;              //@synthesize backgroundOpacity=_backgroundOpacity - In the implementation block
@property (assign,nonatomic) double titleOpacity;                   //@synthesize titleOpacity=_titleOpacity - In the implementation block
+(id)displayStateForNavigationBar:(id)arg1 ;
-(id)initWithNavigationBar:(id)arg1 ;
-(void)setBackgroundOpacity:(double)arg1 ;
-(double)backgroundOpacity;
-(double)titleOpacity;
-(void)applyState:(id)arg1 ;
-(void)setTitleOpacity:(double)arg1 ;
@end

