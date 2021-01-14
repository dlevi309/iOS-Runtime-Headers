/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@class SXComponentView, SXComponentBehavior, UIView;

@interface SXComponentBehaviorHandler : NSObject {

	BOOL _isSetup;
	SXComponentView* _componentView;
	SXComponentBehavior* _behavior;

}

@property (nonatomic,readonly) SXComponentView * componentView;              //@synthesize componentView=_componentView - In the implementation block
@property (nonatomic,readonly) SXComponentBehavior * behavior;               //@synthesize behavior=_behavior - In the implementation block
@property (nonatomic,readonly) UIView * behaviorView; 
@property (nonatomic,readonly) BOOL isSetup;                                 //@synthesize isSetup=_isSetup - In the implementation block
@property (nonatomic,readonly) BOOL requiresContinuousUpdates; 
-(SXComponentBehavior *)behavior;
-(BOOL)isSetup;
-(SXComponentView *)componentView;
-(id)initWithComponentView:(id)arg1 withBehavior:(id)arg2 ;
-(void)setupWithBehaviorController:(id)arg1 ;
-(void)updateWithBehaviorController:(id)arg1 ;
-(UIView *)behaviorView;
-(void)destroyWithBehaviorController:(id)arg1 ;
-(BOOL)requiresContinuousUpdates;
@end

