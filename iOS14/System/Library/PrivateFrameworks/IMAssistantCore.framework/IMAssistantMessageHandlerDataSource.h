/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
*/

@class NSCache;


@protocol IMAssistantMessageHandlerDataSource <NSObject>
@property (nonatomic,readonly) id<IMAssistantContactsDataSource> contactsDataSource; 
@property (nonatomic,readonly) id<IMAssistantChatDataSource> chatDataSource; 
@property (nonatomic,readonly) id<IMAssistantAccountDataSource> accountDataSource; 
@property (nonatomic,readonly) id<IMAssistantCoreTelephonySubscriptionsDataSource> coreTelephonySubscriptionsDataSource; 
@property (nonatomic,readonly) id<IMLocationManager> locationManagerDataSource; 
@property (nonatomic,readonly) id<IMAssistantFileManager> fileManagerDataSource; 
@property (nonatomic,readonly) id<IMFileTransferCenter> fileTransferCenterDataSource; 
@property (nonatomic,readonly) NSCache * handleToContactIdentifierCache; 
@property (nonatomic,readonly) NSCache * spiHandleToPersonCache; 
@property (nonatomic,readonly) NSCache * contactIdentifierToUnifiedContactIdentifierCache; 
@property (nonatomic,readonly) BOOL isInternationalSpamFilteringEnabled; 
@required
-(BOOL)isInternationalSpamFilteringEnabled;
-(id<IMAssistantContactsDataSource>)contactsDataSource;
-(id<IMLocationManager>)locationManagerDataSource;
-(id<IMAssistantChatDataSource>)chatDataSource;
-(id<IMAssistantAccountDataSource>)accountDataSource;
-(id<IMAssistantCoreTelephonySubscriptionsDataSource>)coreTelephonySubscriptionsDataSource;
-(BOOL)screentimeAllowedToShowChat:(id)arg1 error:(id*)arg2;
-(id<IMAssistantFileManager>)fileManagerDataSource;
-(id<IMFileTransferCenter>)fileTransferCenterDataSource;
-(BOOL)screentimeAllowedToShowConversationWithHandleIDs:(id)arg1 error:(id*)arg2;
-(NSCache *)contactIdentifierToUnifiedContactIdentifierCache;
-(NSCache *)handleToContactIdentifierCache;
-(NSCache *)spiHandleToPersonCache;

@end

