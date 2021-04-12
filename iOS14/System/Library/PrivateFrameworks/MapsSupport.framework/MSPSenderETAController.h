/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <libobjc.A.dylib/MSPNavigationListenerDelegate.h>
#import <libobjc.A.dylib/MSPSharedTripGroupSessionDelegate.h>
#import <libobjc.A.dylib/MSPSenderMessageStrategyDelegate.h>

@protocol OS_os_transaction, MSPSenderETAControllerDelegate;
@class NSObject, MSPNavigationListener, NSMutableSet, MSPSharedTripRelay, MSPSharedTripGroupSession, MSPSenderMinimalStrategy, MSPSenderLiveStrategy, MSPSenderMessageStrategy, MSPGroupSessionStorage, MSPSharedTripStorageController, NSArray, NSString;

@interface MSPSenderETAController : NSObject <MSPNavigationListenerDelegate, MSPSharedTripGroupSessionDelegate, MSPSenderMessageStrategyDelegate> {

	NSObject*<OS_os_transaction> _transaction;
	MSPNavigationListener* _navigationListener;
	NSMutableSet* _destinations;
	MSPSharedTripRelay* _idsRelay;
	MSPSharedTripGroupSession* _groupSession;
	MSPSenderMinimalStrategy* _minimalSender;
	MSPSenderLiveStrategy* _liveSender;
	MSPSenderMessageStrategy* _messageSender;
	MSPGroupSessionStorage* _sessionStorage;
	MSPSharedTripStorageController* _storageController;
	NSObject*<MSPSenderETAControllerDelegate> _delegate;

}

@property (nonatomic,readonly) NSArray * activeHandles; 
@property (assign,nonatomic,__weak) NSObject*<MSPSenderETAControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)touchedRules;
-(id)rulesForParticipant:(id)arg1 ;
-(void)_updateStorage;
-(NSObject*<MSPSenderETAControllerDelegate>)delegate;
-(BOOL)startSharingWithMessages:(id)arg1 error:(id*)arg2 ;
-(void)stopSharingWithMessages:(id)arg1 ;
-(void)_stopNavigationListener;
-(void)_sendFinishedToIdentifiers:(id)arg1 ;
-(void)navigationListenerDestinationUpdated:(id)arg1 ;
-(BOOL)startSharingWith:(id)arg1 error:(id*)arg2 ;
-(void)navigationListenerStopped:(id)arg1 ;
-(void)navigationListenerETAUpdated:(id)arg1 ;
-(void)_invalidateSharedTripWithError:(id)arg1 ;
-(void)setDelegate:(NSObject*<MSPSenderETAControllerDelegate>)arg1 ;
-(void)groupSession:(id)arg1 participantDidJoin:(id)arg2 ;
-(void)_invalidateActiveHandles;
-(BOOL)_validateNavigationState:(id*)arg1 ;
-(void)navigationListener:(id)arg1 didFailWithError:(id)arg2 ;
-(id)initWithRelay:(id)arg1 ;
-(void)stopSharingWith:(id)arg1 ;
-(void)groupSessionEnded:(id)arg1 withError:(id)arg2 ;
-(void)stopSharingWithGroup:(id)arg1 ;
-(void)_startingGroupSession;
-(void)navigationListenerIsReady:(id)arg1 ;
-(void)stopSharing;
-(void)_cleanObjects;
-(void)navigationListenerArrived:(id)arg1 ;
-(void)_restoreLastSession;
-(void)navigationListenerTrafficUpdated:(id)arg1 ;
-(BOOL)startSharingWithGroup:(id)arg1 error:(id*)arg2 ;
-(void)navigationListenerRouteUpdated:(id)arg1 ;
-(void)_startNavigationListener;
-(void)groupSession:(id)arg1 participantDidLeave:(id)arg2 ;
-(NSArray *)activeHandles;
-(void)_createGroupSessionIfNeededWithIdentifier:(id)arg1 ;
-(void)dealloc;
@end

