/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMObjectMerge.h>

@protocol HMSymptomsHandlerDelegate;
@class HMFUnfairLock, NSUUID, _HMContext, NSHashTable, HMMutableArray, NSSet, NSString;

@interface HMSymptomsHandler : NSObject <NSSecureCoding, HMFMessageReceiver, HMFLogging, HMObjectMerge> {

	HMFUnfairLock* _lock;
	NSUUID* _sfDeviceIdentifier;
	NSUUID* _uniqueIdentifier;
	id<HMSymptomsHandlerDelegate> _delegate;
	_HMContext* _context;
	NSHashTable* _fixSessions;
	NSUUID* _uuid;
	HMMutableArray* _currentSymptoms;

}

@property (nonatomic,retain) _HMContext * context;                                            //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSHashTable * fixSessions;                                       //@synthesize fixSessions=_fixSessions - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                                 //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) HMMutableArray * currentSymptoms;                              //@synthesize currentSymptoms=_currentSymptoms - In the implementation block
@property (setter=setSFDeviceIdentifier:,copy) NSUUID * sfDeviceIdentifier;                   //@synthesize sfDeviceIdentifier=_sfDeviceIdentifier - In the implementation block
@property (copy,readonly) NSSet * symptoms; 
@property (__weak) id<HMSymptomsHandlerDelegate> delegate;                                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * uniqueIdentifier;                                     //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
+(id)logCategory;
+(BOOL)supportsSecureCoding;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(NSUUID *)uuid;
-(id)init;
-(id<HMSymptomsHandlerDelegate>)delegate;
-(void)_registerForMessages;
-(HMMutableArray *)currentSymptoms;
-(void)_handleSymptomsUpdated:(id)arg1 ;
-(NSUUID *)sfDeviceIdentifier;
-(void)_handleSFDeviceIdentifierUpdated:(id)arg1 ;
-(void)_addFixSession:(id)arg1 ;
-(id)_findAndRemoveFixSessionsForSymptom:(id)arg1 ;
-(void)_callSymptomsUpdatedDelegate:(id)arg1 ;
-(NSHashTable *)fixSessions;
-(void)setSFDeviceIdentifier:(id)arg1 ;
-(void)_callFixSessionAvailabilityUpdatedDelegate;
-(id)newFixSessionForSymptom:(id)arg1 ;
-(void)initiateFixWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setFixSessions:(NSHashTable *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(id)logIdentifier;
-(_HMContext *)context;
-(NSSet *)symptoms;
-(void)setDelegate:(id<HMSymptomsHandlerDelegate>)arg1 ;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)_unconfigureContext;
-(void)_unconfigure;
-(id)initWithCoder:(id)arg1 ;
-(void)__configureWithContext:(id)arg1 ;
-(void)dealloc;
-(id)initWithUUID:(id)arg1 ;
-(void)setContext:(_HMContext *)arg1 ;
@end

