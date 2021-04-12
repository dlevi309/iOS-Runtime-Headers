/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/

#import <OnBoardingKit/OBTrayButton.h>

@class NSObject;

@interface OBHollowButton : OBTrayButton {

	NSObject* _target;
	SEL _downPressSelector;
	SEL _upLiftSelector;

}

@property (nonatomic,retain) NSObject * target;                  //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL downPressSelector;              //@synthesize downPressSelector=_downPressSelector - In the implementation block
@property (assign,nonatomic) SEL upLiftSelector;                 //@synthesize upLiftSelector=_upLiftSelector - In the implementation block
+(id)hollowButtonWithTarget:(id)arg1 downPressSelector:(SEL)arg2 upLiftSelector:(SEL)arg3 ;
-(void)setTarget:(NSObject *)arg1 ;
-(NSObject *)target;
-(void)buttonPressed:(id)arg1 ;
-(void)setDownPressSelector:(SEL)arg1 ;
-(void)setUpLiftSelector:(SEL)arg1 ;
-(SEL)downPressSelector;
-(SEL)upLiftSelector;
@end

