/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class SBAppSwitcherServiceSet;

@interface SBAppSwitcherServiceManager : NSObject {

	SBAppSwitcherServiceSet* _services;

}
+(id)sharedInstance;
-(id)registeredServicesSnapshot;
-(void)unregisterService:(id)arg1 ;
-(void)registerService:(id)arg1 ;
@end

