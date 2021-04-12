/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <libobjc.A.dylib/WFApplicationStateObserver.h>
#import <libobjc.A.dylib/WFErrorRecoveryAttempting.h>

@protocol OS_dispatch_queue;
@class NSError, NSDictionary, NSObject, NSString;

@interface WFResource : NSObject <WFApplicationStateObserver, WFErrorRecoveryAttempting> {

	BOOL _available;
	BOOL _shouldRefreshAvailability;
	NSError* _availabilityError;
	NSDictionary* _definition;
	NSObject*<OS_dispatch_queue> _stateAccessQueue;

}

@property (nonatomic,readonly) BOOL shouldRefreshAvailability;                             //@synthesize shouldRefreshAvailability=_shouldRefreshAvailability - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> stateAccessQueue;              //@synthesize stateAccessQueue=_stateAccessQueue - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * definition;                             //@synthesize definition=_definition - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * eventDictionary; 
@property (getter=isAvailable,nonatomic,readonly) BOOL available;                          //@synthesize available=_available - In the implementation block
@property (nonatomic,readonly) NSError * availabilityError;                                //@synthesize availabilityError=_availabilityError - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(BOOL)isSingleton;
+(BOOL)mustBeAvailableForDisplay;
+(BOOL)refreshesAvailabilityOnApplicationResume;
+(BOOL)alwaysMakeAvailable;
-(id)init;
-(void)dealloc;
-(NSDictionary *)definition;
-(BOOL)isAvailable;
-(BOOL)_isAvailable;
-(id)initWithDefinition:(id)arg1 ;
-(NSDictionary *)eventDictionary;
-(void)applicationContext:(id)arg1 applicationStateDidChange:(long long)arg2 ;
-(void)refreshAvailability;
-(void)updateAvailability:(BOOL)arg1 withError:(id)arg2 ;
-(void)refreshAvailabilityWithNotification;
-(void)invalidateAvailability;
-(NSError *)availabilityError;
-(NSObject*<OS_dispatch_queue>)stateAccessQueue;
-(void)refreshAvailabilityWithForcedNotification;
-(id)_availabilityError;
-(void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 userInterface:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)shouldNotifyResourcesAfterAvailabilityUpdateWithForcedNotification:(BOOL)arg1 ;
-(void)notifyResourcesAboutAvailabilityChange;
-(void)refreshAvailabilityWithNotification:(BOOL)arg1 ;
-(BOOL)shouldRefreshAvailability;
@end

