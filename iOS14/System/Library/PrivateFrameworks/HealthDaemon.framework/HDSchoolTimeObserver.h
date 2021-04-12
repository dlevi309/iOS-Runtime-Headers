/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/SCLSchoolModeDelegate.h>

@protocol HDSchoolTimeObserverDelegate;
@class SCLSchoolMode, SCLState, NSString;

@interface HDSchoolTimeObserver : NSObject <SCLSchoolModeDelegate> {

	SCLSchoolMode* _schoolMode;
	SCLState* _schoolModeState;
	os_unfair_lock_s _lock;
	id<HDSchoolTimeObserverDelegate> _delegate;

}

@property (nonatomic,readonly) BOOL inSchoolMode; 
@property (nonatomic,__weak,readonly) id<HDSchoolTimeObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)unitTest_setSchoolMode:(BOOL)arg1 ;
-(id<HDSchoolTimeObserverDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)dealloc;
-(BOOL)inSchoolMode;
-(void)_unitTestSchoolModeChanged;
-(void)schoolMode:(id)arg1 didUpdateState:(id)arg2 fromState:(id)arg3 ;
-(void)schoolMode:(id)arg1 didUpdateScheduleSettings:(id)arg2 ;
-(void)schoolModeDidUpdateUnlockHistory:(id)arg1 ;
@end

