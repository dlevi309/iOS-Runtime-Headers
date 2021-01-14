/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@class NSArray;

@interface CKPinnedConversationActivitySnapshot : NSObject {

	NSArray* _activityItems;
	NSArray* _contactItems;

}

@property (nonatomic,copy,readonly) NSArray * activityItems;              //@synthesize activityItems=_activityItems - In the implementation block
@property (nonatomic,copy,readonly) NSArray * contactItems;               //@synthesize contactItems=_contactItems - In the implementation block
+(id)emptySnapshot;
-(long long)_firstContactItemAlignmentForContactItem:(id)arg1 previousSnapshot:(id)arg2 totalNumberOfContactItemIdentifiersWithUnreadMessages:(long long)arg3 ;
-(id)initWithActivityItems:(id)arg1 contactItems:(id)arg2 ;
-(double)_contentScaleForMessage:(id)arg1 amongRecentMessagesInPinnedConversations:(id)arg2 ;
-(long long)_contactItemAlignmentForItemAtIndex:(long long)arg1 firstItemAlignment:(long long)arg2 ;
-(id)_contactItemMatchingIdentifier:(id)arg1 ;
-(double)_contentScaleForContactItemAtIndex:(long long)arg1 withMessageContentScale:(double)arg2 ;
-(id)initWithConversation:(id)arg1 recentMessagesInPinnedConversations:(id)arg2 previousSnapshot:(id)arg3 ;
-(NSArray *)activityItems;
-(NSArray *)contactItems;
@end

