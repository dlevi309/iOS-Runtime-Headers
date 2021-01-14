/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)buttonPressed:(id)arg1 ;
-(NSObject *)target;
-(void)setDownPressSelector:(SEL)arg1 ;
-(void)setUpLiftSelector:(SEL)arg1 ;
-(SEL)downPressSelector;
-(SEL)upLiftSelector;
@end

