/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/


@class NSMutableDictionary;

@interface IDSServiceAvailabilityController : NSObject {

	NSMutableDictionary* _availabilityHandlers;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(BOOL)addListenerID:(id)arg1 forService:(id)arg2 ;
-(long long)availabilityForListenerID:(id)arg1 forService:(id)arg2 ;
-(void)_postNotificationForService:(id)arg1 availability:(long long)arg2 ;
-(void)_handleServiceMonitorNotification:(id)arg1 ;
-(BOOL)_isValidServiceType:(id)arg1 ;
-(void)_startListeningToMonitor:(id)arg1 ;
-(id)containerForService:(id)arg1 create:(BOOL)arg2 ;
-(void)_stopListeningToMonitor:(id)arg1 ;
-(BOOL)hasListenerID:(id)arg1 forService:(id)arg2 ;
-(BOOL)removeListenerID:(id)arg1 forService:(id)arg2 ;
@end

