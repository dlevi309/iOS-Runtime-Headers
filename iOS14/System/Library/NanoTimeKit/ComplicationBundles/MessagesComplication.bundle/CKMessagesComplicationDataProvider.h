/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/NanoTimeKit/ComplicationBundles/MessagesComplication.bundle/MessagesComplication
*/


@protocol NSObject, OS_os_log;
@class NSHashTable, NSObject;

@interface CKMessagesComplicationDataProvider : NSObject {

	NSHashTable* _subscribers;
	id<NSObject> _observationToken;
	NSObject*<OS_os_log> _log;

}

@property (nonatomic,retain) NSHashTable * subscribers;                  //@synthesize subscribers=_subscribers - In the implementation block
@property (nonatomic,retain) id<NSObject> observationToken;              //@synthesize observationToken=_observationToken - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> log;                   //@synthesize log=_log - In the implementation block
-(void)daemonControllerDidConnect;
-(id)init;
-(NSObject*<OS_os_log>)log;
-(void)connectToDaemon;
-(NSHashTable *)subscribers;
-(void)disconnectFromDaemon;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(void)addSubscriber:(id)arg1 ;
-(void)removeSubscriber:(id)arg1 ;
-(void)daemonConnectionLost;
-(void)daemonControllerWillConnect;
-(void)daemonControllerDidDisconnect;
-(id<NSObject>)observationToken;
-(void)setObservationToken:(id<NSObject>)arg1 ;
-(void)dealloc;
-(void)setSubscribers:(NSHashTable *)arg1 ;
-(void)stopUnreadCountObservation;
-(void)startUnreadCountObservation;
-(void)notifySubscribersAboutNewUnreadCount:(id)arg1 ;
-(id)urlForLastMessage;
@end

