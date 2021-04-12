/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@protocol HMSymptomFixSessionDelegate;
@class HMFUnfairLock, NSError, SFDeviceRepairSession, HMFTimer, UIViewController, _HMContext, NSString, HMSymptom, NSUUID;

@interface HMSymptomFixSession : NSObject <HMFLogging, HMFTimerDelegate> {

	HMFUnfairLock* _lock;
	BOOL _deviceRepairSessionFinished;
	BOOL _hasSymptomDisappeared;
	unsigned _deviceRepairFlags;
	long long _state;
	id<HMSymptomFixSessionDelegate> _delegate;
	NSError* _error;
	SFDeviceRepairSession* _deviceRepairSession;
	HMFTimer* _symptomDisappearanceTimer;
	UIViewController* _presentingViewController;
	_HMContext* _context;
	NSString* _logIdentifier;
	HMSymptom* _symptom;
	NSUUID* _deviceIdentifier;

}

@property (nonatomic,readonly) _HMContext * context;                                                             //@synthesize context=_context - In the implementation block
@property (nonatomic,copy,readonly) NSString * logIdentifier;                                                    //@synthesize logIdentifier=_logIdentifier - In the implementation block
@property (assign,nonatomic) long long state;                                                                    //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSError * error;                                                                    //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) SFDeviceRepairSession * deviceRepairSession;                                        //@synthesize deviceRepairSession=_deviceRepairSession - In the implementation block
@property (assign,getter=isDeviceRepairSessionFinished,nonatomic) BOOL deviceRepairSessionFinished;              //@synthesize deviceRepairSessionFinished=_deviceRepairSessionFinished - In the implementation block
@property (assign,nonatomic) BOOL hasSymptomDisappeared;                                                         //@synthesize hasSymptomDisappeared=_hasSymptomDisappeared - In the implementation block
@property (nonatomic,retain) HMFTimer * symptomDisappearanceTimer;                                               //@synthesize symptomDisappearanceTimer=_symptomDisappearanceTimer - In the implementation block
@property (nonatomic,readonly) HMSymptom * symptom;                                                              //@synthesize symptom=_symptom - In the implementation block
@property (nonatomic,readonly) NSUUID * deviceIdentifier;                                                        //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (assign,nonatomic) unsigned deviceRepairFlags;                                                         //@synthesize deviceRepairFlags=_deviceRepairFlags - In the implementation block
@property (assign,nonatomic,__weak) id<HMSymptomFixSessionDelegate> delegate;                                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIViewController * presentingViewController;                                        //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)_createDeviceRepairSession;
+(id)_createSymptomDisappearanceTimer;
-(id)init;
-(void)dealloc;
-(id<HMSymptomFixSessionDelegate>)delegate;
-(void)setDelegate:(id<HMSymptomFixSessionDelegate>)arg1 ;
-(NSError *)error;
-(void)stop;
-(void)start;
-(void)setError:(NSError *)arg1 ;
-(long long)state;
-(_HMContext *)context;
-(void)setState:(long long)arg1 ;
-(NSUUID *)deviceIdentifier;
-(UIViewController *)presentingViewController;
-(void)_updateState;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(NSString *)logIdentifier;
-(void)timerDidFire:(id)arg1 ;
-(id)initWithSymptom:(id)arg1 deviceIdentifier:(id)arg2 context:(id)arg3 ;
-(void)setDeviceRepairFlags:(unsigned)arg1 ;
-(void)noteSymptomDisappeared;
-(HMSymptom *)symptom;
-(void)setDeviceRepairSession:(SFDeviceRepairSession *)arg1 ;
-(SFDeviceRepairSession *)deviceRepairSession;
-(unsigned)deviceRepairFlags;
-(void)_updateForDeviceSetupProgressEvent:(unsigned)arg1 error:(id)arg2 ;
-(void)setSymptomDisappearanceTimer:(HMFTimer *)arg1 ;
-(void)setHasSymptomDisappeared:(BOOL)arg1 ;
-(void)setDeviceRepairSessionFinished:(BOOL)arg1 ;
-(void)_startSymptomDisappearanceTimer;
-(BOOL)isDeviceRepairSessionFinished;
-(BOOL)hasSymptomDisappeared;
-(HMFTimer *)symptomDisappearanceTimer;
@end

