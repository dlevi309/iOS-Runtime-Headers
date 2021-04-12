/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/


@class NSMutableDictionary;

@interface IDSServiceAvailabilityController : NSObject {

	NSMutableDictionary* _availabilityHandlers;

}
+(id)sharedInstance;
-(id)containerForService:(id)arg1 create:(BOOL)arg2 ;
-(id)init;
-(BOOL)hasListenerID:(id)arg1 forService:(id)arg2 ;
-(void)_postNotificationForService:(id)arg1 availability:(long long)arg2 ;
-(void)_startListeningToMonitor:(id)arg1 ;
-(long long)availabilityForListenerID:(id)arg1 forService:(id)arg2 ;
-(void)_stopListeningToMonitor:(id)arg1 ;
-(void)_handleServiceMonitorNotification:(id)arg1 ;
-(BOOL)removeListenerID:(id)arg1 forService:(id)arg2 ;
-(BOOL)addListenerID:(id)arg1 forService:(id)arg2 ;
-(BOOL)_isValidServiceType:(id)arg1 ;
-(void)dealloc;
@end

