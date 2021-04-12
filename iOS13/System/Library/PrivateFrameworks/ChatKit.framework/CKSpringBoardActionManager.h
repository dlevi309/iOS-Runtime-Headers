/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL shouldHideGroupsDonations; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(NSArray *)conversationCache;
-(void)chatStateChanged:(id)arg1 ;
-(void)setConversationCache:(NSArray *)arg1 ;
-(void)setShouldHideGroupsDonations:(BOOL)arg1 ;
-(void)contactsSearchManager:(id)arg1 finishedSearchingWithResults:(id)arg2 ;
-(id)conversationCacheForContactsSearchManager:(id)arg1 ;
-(BOOL)shouldHideGroupsDonations;
-(CKContactsSearchManager *)contactsSearchManager;
-(void)updateShortcutItems;
-(void)setContactsSearchManager:(CKContactsSearchManager *)arg1 ;
@end

