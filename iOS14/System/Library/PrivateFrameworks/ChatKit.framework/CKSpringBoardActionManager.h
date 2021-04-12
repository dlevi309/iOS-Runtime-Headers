/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <libobjc.A.dylib/CKContactsSearchManagerDelegate.h>

@class CKContactsSearchManager, NSArray, NSString;

@interface CKSpringBoardActionManager : NSObject <CKContactsSearchManagerDelegate> {

	BOOL shouldHideGroupsDonations;
	CKContactsSearchManager* _contactsSearchManager;
	NSArray* _conversationCache;

}

@property (nonatomic,retain) CKContactsSearchManager * contactsSearchManager;              //@synthesize contactsSearchManager=_contactsSearchManager - In the implementation block
@property (nonatomic,copy) NSArray * conversationCache;                                    //@synthesize conversationCache=_conversationCache - In the implementation block
@property (assign,nonatomic) BOOL shouldHideGroupsDonations; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(CKContactsSearchManager *)contactsSearchManager;
-(id)shortcutItemForConversation:(id)arg1 ;
-(void)_refreshConversationCache;
-(void)updateShortcutItems;
-(void)setContactsSearchManager:(CKContactsSearchManager *)arg1 ;
-(NSArray *)conversationCache;
-(void)chatStateChanged:(id)arg1 ;
-(void)setConversationCache:(NSArray *)arg1 ;
-(void)setShouldHideGroupsDonations:(BOOL)arg1 ;
-(void)contactsSearchManager:(id)arg1 finishedSearchingWithResults:(id)arg2 ;
-(id)conversationCacheForContactsSearchManager:(id)arg1 ;
-(BOOL)shouldHideGroupsDonations;
-(void)dealloc;
@end

