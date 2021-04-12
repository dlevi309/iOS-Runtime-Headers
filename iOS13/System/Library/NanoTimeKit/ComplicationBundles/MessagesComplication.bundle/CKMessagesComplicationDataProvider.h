/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)removeSubscriber:(id)arg1 ;
-(NSObject*<OS_os_log>)log;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(NSHashTable *)subscribers;
-(void)disconnectFromDaemon;
-(void)connectToDaemon;
-(void)addSubscriber:(id)arg1 ;
-(id<NSObject>)observationToken;
-(void)setObservationToken:(id<NSObject>)arg1 ;
-(void)setSubscribers:(NSHashTable *)arg1 ;
-(void)stopUnreadCountObservation;
-(void)startUnreadCountObservation;
-(void)notifySubscribersAboutNewUnreadCount:(id)arg1 ;
-(id)urlForLastMessage;
@end

