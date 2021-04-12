/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NSObject*<MSPSenderETAControllerDelegate>)delegate;
-(void)setDelegate:(NSObject*<MSPSenderETAControllerDelegate>)arg1 ;
-(void)sendMessage:(id)arg1 toParticipant:(id)arg2 ;
-(id)initWithRelay:(id)arg1 ;
-(void)startSharingWith:(id)arg1 ;
-(void)stopSharingWith:(id)arg1 ;
-(void)startSharingWithMessages:(id)arg1 ;
-(void)stopSharingWithMessages:(id)arg1 ;
-(void)startSharingWithGroup:(id)arg1 ;
-(void)stopSharingWithGroup:(id)arg1 ;
-(void)stopSharing;
-(NSArray *)activeHandles;
-(void)groupSession:(id)arg1 participantDidJoin:(id)arg2 ;
-(void)groupSession:(id)arg1 participantDidLeave:(id)arg2 ;
-(id)rulesForParticipant:(id)arg1 ;
-(void)touchedRules;
-(void)groupSessionEnded:(id)arg1 withError:(id)arg2 ;
-(void)navigationListenerIsReady:(id)arg1 ;
-(void)navigationListener:(id)arg1 didFailWithError:(id)arg2 ;
-(void)navigationListenerStopped:(id)arg1 ;
-(void)navigationListenerETAUpdated:(id)arg1 ;
-(void)navigationListenerDestinationUpdated:(id)arg1 ;
-(void)navigationListenerRouteUpdated:(id)arg1 ;
-(void)navigationListenerTrafficUpdated:(id)arg1 ;
-(void)navigationListenerArrived:(id)arg1 ;
-(void)_restoreLastSession;
-(void)_createGroupSessionIfNeededWithIdentifier:(id)arg1 ;
-(void)_invalidateActiveHandles;
-(void)_startNavigationListener;
-(void)_startingGroupSession;
-(void)_updateStorage;
-(void)_sendfinishedToIdentifiers:(id)arg1 ;
-(void)_cleanObjects;
-(void)_stopNavigationListener;
-(void)_invalidateSharedTripWithError:(id)arg1 ;
@end

