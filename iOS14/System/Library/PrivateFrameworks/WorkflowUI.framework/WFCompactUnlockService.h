/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


@class SBSLockScreenService;

@interface WFCompactUnlockService : NSObject {

	SBSLockScreenService* _service;

}

@property (nonatomic,retain) SBSLockScreenService * service;              //@synthesize service=_service - In the implementation block
-(void)setService:(SBSLockScreenService *)arg1 ;
-(SBSLockScreenService *)service;
-(void)dealloc;
-(void)requestUnlockIfNeeded:(/*^block*/id)arg1 ;
@end

