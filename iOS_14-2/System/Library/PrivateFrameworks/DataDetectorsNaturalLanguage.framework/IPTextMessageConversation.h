/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/DataDetectorsNaturalLanguage
*/


@class IPCircularBufferArray, NSArray, NSMutableDictionary;

@interface IPTextMessageConversation : NSObject {

	IPCircularBufferArray* _lastMessages;
	NSArray* _allMessages;
	NSMutableDictionary* _messageByMessageIdentifierDictionary;
	NSMutableDictionary* _eventsByMessageIdentifierDictionary;

}

@property (retain) NSMutableDictionary * messageByMessageIdentifierDictionary;              //@synthesize messageByMessageIdentifierDictionary=_messageByMessageIdentifierDictionary - In the implementation block
@property (retain) NSMutableDictionary * eventsByMessageIdentifierDictionary;               //@synthesize eventsByMessageIdentifierDictionary=_eventsByMessageIdentifierDictionary - In the implementation block
@property (nonatomic,copy) NSArray * allMessages;                                           //@synthesize allMessages=_allMessages - In the implementation block
+(id)collapsedMessagesFromMessages:(id)arg1 ;
+(id)collapseMessages:(id)arg1 ;
-(id)init;
-(void)reset;
-(NSArray *)allMessages;
-(void)addMessage:(id)arg1 ;
-(void)scanEventsInLastMessageOnly:(BOOL)arg1 synchronously:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSMutableDictionary *)messageByMessageIdentifierDictionary;
-(NSMutableDictionary *)eventsByMessageIdentifierDictionary;
-(void)_scanEventsInLastMessageOnly:(BOOL)arg1 synchronously:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)messageForIdentifier:(id)arg1 ;
-(id)eventsInPreviouslyScannedMessageWithIdentifier:(id)arg1 ;
-(void)setAllMessages:(NSArray *)arg1 ;
-(void)setMessageByMessageIdentifierDictionary:(NSMutableDictionary *)arg1 ;
-(void)setEventsByMessageIdentifierDictionary:(NSMutableDictionary *)arg1 ;
@end

