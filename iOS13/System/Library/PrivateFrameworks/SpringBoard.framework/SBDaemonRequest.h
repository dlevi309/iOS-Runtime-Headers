/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@interface SBDaemonRequest : NSObject {

	/*^block*/id _enabler;
	/*^block*/id _disabler;

}

@property (nonatomic,copy) id enabler;               //@synthesize enabler=_enabler - In the implementation block
@property (nonatomic,copy) id disabler;              //@synthesize disabler=_disabler - In the implementation block
+(id)requestWithEnabler:(/*^block*/id)arg1 disabler:(/*^block*/id)arg2 ;
-(void)setEnabler:(id)arg1 ;
-(void)setDisabler:(id)arg1 ;
-(void)dispatchEnablerOnQueue:(id)arg1 ;
-(void)dispatchDisablerOnQueue:(id)arg1 ;
-(id)enabler;
-(id)disabler;
@end

