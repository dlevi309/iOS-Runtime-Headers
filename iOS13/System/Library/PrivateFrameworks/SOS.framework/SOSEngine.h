/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SOS.framework/SOS
*/

#import <SOS/SOSInternalServerProtocol.h>
#import <SOS/SOSPersistentTimerLocationManagerDelegate.h>
#import <SOS/SOSServerProtocol.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class SOSPersistentTimerLocationManager, NSDate, CLLocation, SOSContactsManager, NSString, FKFriendsManager, _MKLocationShifter, NSMutableArray;

@interface SOSEngine : NSObject <SOSInternalServerProtocol, SOSPersistentTimerLocationManagerDelegate, SOSServerProtocol, NSXPCListenerDelegate> {

	SOSPersistentTimerLocationManager* _sosPersistentTimerLocationManager;
	NSDate* _timeToStopSendingMessages;
	NSDate* _timeLastMessageSent;
	CLLocation* _lastLocationSent;
	SOSContactsManager* _contactsManager;
	NSString* _medicalIDName;
	long long _notifyContactsReason;
	FKFriendsManager* _friendsManager;
	_MKLocationShifter* _locationShifter;
	NSMutableArray* _clientConnections;

}

@property (nonatomic,retain) FKFriendsManager * friendsManager;                 //@synthesize friendsManager=_friendsManager - In the implementation block
@property (nonatomic,retain) _MKLocationShifter * locationShifter;              //@synthesize locationShifter=_locationShifter - In the implementation block
@property (nonatomic,retain) NSMutableArray * clientConnections;                //@synthesize clientConnections=_clientConnections - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)contactStore;
+(id)locationShifter;
+(id)meContact;
+(void)shiftedLocationWithLocation:(id)arg1 completion:(/*^block*/id)arg2 ;
+(BOOL)authorizedToUseContactStore;
+(void)preloadContactStoreIfNecessary;
+(void)_sendMessageToRecipients:(id)arg1 withLocation:(id)arg2 isFirstMessage:(BOOL)arg3 medicalIDName:(id)arg4 Reason:(long long)arg5 ;
+(id)_sosMessageForLocation:(id)arg1 isFirstMessage:(BOOL)arg2 withMMS:(BOOL)arg3 callbackNumber:(id)arg4 medicalIDName:(id)arg5 Reason:(long long)arg6 ;
+(BOOL)_isBasebandDevice;
+(void)_sendSMSMessage:(id)arg1 MMSMessage:(id)arg2 location:(id)arg3 recipients:(id)arg4 failureBlock:(/*^block*/id)arg5 ;
+(id)GPSCoordinatesURLForLocation:(id)arg1 ;
+(void)_sendCKMessage:(id)arg1 failureBlock:(/*^block*/id)arg2 ;
+(id)fullNameForContact:(id)arg1 ;
+(id)firstNameForContact:(id)arg1 ;
+(id)_sosMessageForLocation:(id)arg1 isFirstMessage:(BOOL)arg2 withMMS:(BOOL)arg3 myFullName:(id)arg4 myFirstName:(id)arg5 callbackNumber:(id)arg6 Reason:(long long)arg7 ;
+(id)additionalTextForCallbackNumber:(id)arg1 fullName:(id)arg2 firstName:(id)arg3 ;
+(void)_sendMessage:(id)arg1 location:(id)arg2 recipients:(id)arg3 useStandalone:(BOOL)arg4 failureBlock:(/*^block*/id)arg5 ;
+(id)additionalTextForCallbackNumber:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)start;
-(_MKLocationShifter *)locationShifter;
-(void)setLocationShifter:(_MKLocationShifter *)arg1 ;
-(void)contactStoreDidChange;
-(NSMutableArray *)clientConnections;
-(void)setClientConnections:(NSMutableArray *)arg1 ;
-(id)contactsManager;
-(FKFriendsManager *)friendsManager;
-(void)setFriendsManager:(FKFriendsManager *)arg1 ;
-(void)willStartSendingLocationUpdate;
-(void)startSendingLocationUpdateWithCompletion:(/*^block*/id)arg1 ;
-(void)startSendingLocationUpdateForReason:(long long)arg1 WithCompletion:(/*^block*/id)arg2 ;
-(void)stopSendingLocationUpdate;
-(void)isSendingLocationUpdate:(/*^block*/id)arg1 ;
-(void)mostRecentLocationSentWithCompletion:(/*^block*/id)arg1 ;
-(void)updateCurrentSOSInitiationState:(long long)arg1 ;
-(void)updateCurrentSOSInteractiveState:(long long)arg1 ;
-(void)dismissSOSWithCompletion:(/*^block*/id)arg1 ;
-(void)didDismissSOSBeforeSOSCall:(long long)arg1 ;
-(id)initWithoutEntitlement;
-(void)SOSSendingLocationUpdateChanged:(id)arg1 ;
-(BOOL)isSendingLocationUpdate;
-(BOOL)locationIsValidToSend:(id)arg1 ;
-(BOOL)notificationEnabledAndContactsExist;
-(long long)currentSOSInitiationState;
-(void)sosPersistentTimerLocationMangerTimerFired:(id)arg1 location:(id)arg2 ;
-(void)fetchMedicalIDName;
@end

