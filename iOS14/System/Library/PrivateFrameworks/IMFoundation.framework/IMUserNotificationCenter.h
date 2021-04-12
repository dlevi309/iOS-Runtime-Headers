/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
*/


#import <IMFoundation/IMFoundation-Structs.h>
@class NSMutableDictionary;

@interface IMUserNotificationCenter : NSObject {

	NSMutableDictionary* _identifierToIMUserNotificationQueueMap;
	NSMutableDictionary* _identifierToListenerQueueMap;
	NSMutableDictionary* _identifierToBlockQueueMap;
	NSMutableDictionary* _identifierToRunLoopSourcesMap;
	NSMutableDictionary* _identifierToCFUserNotificationMap;

}

@property (nonatomic,retain) NSMutableDictionary * identifierToIMUserNotificationQueueMap;              //@synthesize identifierToIMUserNotificationQueueMap=_identifierToIMUserNotificationQueueMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * identifierToListenerQueueMap;                        //@synthesize identifierToListenerQueueMap=_identifierToListenerQueueMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * identifierToBlockQueueMap;                           //@synthesize identifierToBlockQueueMap=_identifierToBlockQueueMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * identifierToRunLoopSourcesMap;                       //@synthesize identifierToRunLoopSourcesMap=_identifierToRunLoopSourcesMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * identifierToCFUserNotificationMap;                   //@synthesize identifierToCFUserNotificationMap=_identifierToCFUserNotificationMap - In the implementation block
+(id)sharedInstance;
-(/*^block*/id)_frontBlockForIdentifier:(id)arg1 ;
-(void)removeAllListeners;
-(id)_dequeueUserNotificationForIdentifier:(id)arg1 ;
-(NSMutableDictionary *)identifierToCFUserNotificationMap;
-(void)_enqueueListener:(id)arg1 forIdentifier:(id)arg2 ;
-(void)_enqueueUserNotification:(id)arg1 forIdentifier:(id)arg2 ;
-(void)_cancelActiveUserNotificationForIdentifier:(id)arg1 ;
-(void)_displayNextUserNotificationForIdentifier:(id)arg1 ;
-(id)_dequeueListenerForIdentifier:(id)arg1 ;
-(void)addUserNotification:(id)arg1 listener:(id)arg2 ;
-(NSMutableDictionary *)identifierToBlockQueueMap;
-(unsigned long long)countForIdentifier:(id)arg1 ;
-(id)_frontListenerForIdentifier:(id)arg1 ;
-(id)_frontUserNotificationForIdentifier:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(/*^block*/id)_dequeueBlockForIdentifier:(id)arg1 ;
-(void)setIdentifierToRunLoopSourcesMap:(NSMutableDictionary *)arg1 ;
-(void)setIdentifierToBlockQueueMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)identifierToListenerQueueMap;
-(void)setIdentifierToListenerQueueMap:(NSMutableDictionary *)arg1 ;
-(void)_handleUserNotification:(CFUserNotificationRef)arg1 responseFlags:(unsigned long long)arg2 ;
-(void)_enqueueBlock:(/*^block*/id)arg1 forIdentifier:(id)arg2 ;
-(NSMutableDictionary *)identifierToRunLoopSourcesMap;
-(void)addUserNotification:(id)arg1 listener:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removeNotificationsForServiceIdentifier:(id)arg1 ;
-(NSMutableDictionary *)identifierToIMUserNotificationQueueMap;
-(void)setIdentifierToIMUserNotificationQueueMap:(NSMutableDictionary *)arg1 ;
-(void)setIdentifierToCFUserNotificationMap:(NSMutableDictionary *)arg1 ;
@end

