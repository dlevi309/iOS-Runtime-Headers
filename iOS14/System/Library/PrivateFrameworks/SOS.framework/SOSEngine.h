/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SOS.framework/SOS
*/

#import <SOS/SOSInternalServerProtocol.h>
#import <SOS/SOSPersistentTimerLocationManagerDelegate.h>
#import <SOS/SOSServerProtocol.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class SOSPersistentTimerLocationManager, NSDate, SOSContactsManager, NSString, FKFriendsManager, _MKLocationShifter, NSMutableArray, CLLocation;

@interface SOSEngine : NSObject <SOSInternalServerProtocol, SOSPersistentTimerLocationManagerDelegate, SOSServerProtocol, NSXPCListenerDelegate> {

	SOSPersistentTimerLocationManager* _sosPersistentTimerLocationManager;
	NSDate* _timeToStopSendingMessages;
	NSDate* _timeLastMessageSent;
	SOSContactsManager* _contactsManager;
	NSString* _medicalIDName;
	long long _notifyContactsReason;
	FKFriendsManager* _friendsManager;
	_MKLocationShifter* _locationShifter;
	NSMutableArray* _clientConnections;
	CLLocation* _lastLocationSent;

}

@property (nonatomic,retain) FKFriendsManager * friendsManager;                                                    //@synthesize friendsManager=_friendsManager - In the implementation block
@property (nonatomic,retain) _MKLocationShifter * locationShifter;                                                 //@synthesize locationShifter=_locationShifter - In the implementation block
@property (nonatomic,retain) NSMutableArray * clientConnections;                                                   //@synthesize clientConnections=_clientConnections - In the implementation block
@property (nonatomic,readonly) CLLocation * lastLocationSent;                                                      //@synthesize lastLocationSent=_lastLocationSent - In the implementation block
@property (nonatomic,readonly) SOSPersistentTimerLocationManager * sosPersistentTimerLocationManager;              //@synthesize sosPersistentTimerLocationManager=_sosPersistentTimerLocationManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)contactStore;
+(id)meContact;
+(id)sharedInstance;
+(id)locationShifter;
+(void)shiftedLocationWithLocation:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)fullNameForContact:(id)arg1 ;
+(BOOL)authorizedToUseContactStore;
+(void)preloadContactStoreIfNecessary;
+(void)_sendMessageToRecipients:(id)arg1 withLocation:(id)arg2 isFirstMessage:(BOOL)arg3 medicalIDName:(id)arg4 Reason:(long long)arg5 ;
+(id)_sosMessageForLocation:(id)arg1 isFirstMessage:(BOOL)arg2 withMMS:(BOOL)arg3 callbackNumber:(id)arg4 medicalIDName:(id)arg5 Reason:(long long)arg6 ;
+(BOOL)_isBasebandDevice;
+(void)_sendSMSMessage:(id)arg1 MMSMessage:(id)arg2 location:(id)arg3 recipients:(id)arg4 failureBlock:(/*^block*/id)arg5 ;
+(id)GPSCoordinatesURLForLocation:(id)arg1 ;
+(void)_sendCKMessage:(id)arg1 failureBlock:(/*^block*/id)arg2 ;
+(id)firstNameForContact:(id)arg1 ;
+(id)_sosMessageForLocation:(id)arg1 isFirstMessage:(BOOL)arg2 withMMS:(BOOL)arg3 myFullName:(id)arg4 myFirstName:(id)arg5 callbackNumber:(id)arg6 Reason:(long long)arg7 ;
+(id)additionalTextForCallbackNumber:(id)arg1 fullName:(id)arg2 firstName:(id)arg3 ;
+(void)_sendMessage:(id)arg1 location:(id)arg2 recipients:(id)arg3 useStandalone:(BOOL)arg4 failureBlock:(/*^block*/id)arg5 ;
+(id)additionalTextForCallbackNumber:(id)arg1 ;
-(id)contactsManager;
-(id)init;
-(void)start;
-(void)startSendingLocationUpdateWithCompletion:(/*^block*/id)arg1 ;
-(void)contactStoreDidChange;
-(void)mostRecentLocationSentWithCompletion:(/*^block*/id)arg1 ;
-(void)setClientConnections:(NSMutableArray *)arg1 ;
-(_MKLocationShifter *)locationShifter;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(BOOL)isSendingLocationUpdate;
-(long long)currentSOSInitiationState;
-(NSMutableArray *)clientConnections;
-(void)willStartSendingLocationUpdate;
-(void)dismissSOSWithCompletion:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)stopSendingLocationUpdate;
-(void)setLocationShifter:(_MKLocationShifter *)arg1 ;
-(void)didDismissSOSBeforeSOSCall:(long long)arg1 ;
-(FKFriendsManager *)friendsManager;
-(void)setFriendsManager:(FKFriendsManager *)arg1 ;
-(void)startSendingLocationUpdateForReason:(long long)arg1 WithCompletion:(/*^block*/id)arg2 ;
-(void)isSendingLocationUpdate:(/*^block*/id)arg1 ;
-(void)updateCurrentSOSInitiationState:(long long)arg1 ;
-(void)updateCurrentSOSInteractiveState:(long long)arg1 ;
-(id)initWithoutEntitlement;
-(void)SOSSendingLocationUpdateChanged:(id)arg1 ;
-(BOOL)locationIsValidToSend:(id)arg1 ;
-(BOOL)notificationEnabledAndContactsExist;
-(void)sosPersistentTimerLocationMangerTimerFired:(id)arg1 location:(id)arg2 ;
-(void)fetchMedicalIDName;
-(CLLocation *)lastLocationSent;
-(SOSPersistentTimerLocationManager *)sosPersistentTimerLocationManager;
@end

