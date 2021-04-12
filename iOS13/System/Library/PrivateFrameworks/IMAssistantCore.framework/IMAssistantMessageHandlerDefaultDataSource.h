/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
*/

#import <IMAssistantCore/IMAssistantMessageHandlerDataSource.h>

@class NSCache, CNContactStore, NSString;

@interface IMAssistantMessageHandlerDefaultDataSource : NSObject <IMAssistantMessageHandlerDataSource> {

	BOOL _didRegisterForContactStoreChangeNotifications;
	CNContactStore* _contactStore;

}

@property (assign,nonatomic) BOOL didRegisterForContactStoreChangeNotifications;                        //@synthesize didRegisterForContactStoreChangeNotifications=_didRegisterForContactStoreChangeNotifications - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                                             //@synthesize contactStore=_contactStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<IMAssistantContactsDataSource> contactsDataSource; 
@property (nonatomic,readonly) id<IMAssistantChatDataSource> chatDataSource; 
@property (nonatomic,readonly) id<IMAssistantAccountDataSource> accountDataSource; 
@property (nonatomic,readonly) id<IMLocationManager> locationManagerDataSource; 
@property (nonatomic,readonly) NSCache * handleToContactIdentifierCache; 
@property (nonatomic,readonly) NSCache * spiHandleToPersonCache; 
@property (nonatomic,readonly) NSCache * contactIdentifierToUnifiedContactIdentifierCache; 
@property (nonatomic,readonly) BOOL isInternationalSpamFilteringEnabled; 
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(BOOL)isInternationalSpamFilteringEnabled;
-(void)contactStoreDidChange:(id)arg1 ;
-(id<IMAssistantContactsDataSource>)contactsDataSource;
-(id<IMLocationManager>)locationManagerDataSource;
-(id<IMAssistantChatDataSource>)chatDataSource;
-(id<IMAssistantAccountDataSource>)accountDataSource;
-(BOOL)screentimeAllowedToShowChat:(id)arg1 ;
-(BOOL)screentimeAllowedToShowConversationWithHandleIDs:(id)arg1 ;
-(NSCache *)contactIdentifierToUnifiedContactIdentifierCache;
-(NSCache *)handleToContactIdentifierCache;
-(NSCache *)spiHandleToPersonCache;
-(void)registerForContactStoreChangeNotificationsIfNecessary;
-(BOOL)didRegisterForContactStoreChangeNotifications;
-(void)setDidRegisterForContactStoreChangeNotifications:(BOOL)arg1 ;
@end

