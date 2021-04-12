/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKAbstractReviewViewController.h>

@class NSArray;

@interface CKReviewLargeUnsyncedConversationsViewController : CKAbstractReviewViewController {

	NSArray* _conversations;

}

@property (nonatomic,retain) NSArray * conversations;              //@synthesize conversations=_conversations - In the implementation block
+(void)initialize;
-(void)setConversations:(NSArray *)arg1 ;
-(void)_populateConversationsIfNeeded;
-(NSArray *)conversations;
-(id)navigationBarTitle;
-(id)tableViewCellReuseIdentifier;
-(Class)tableViewCellClass;
-(void)reloadModelData;
-(unsigned long long)numberOfModelObjects;
-(id)modelObjectAtIndex:(unsigned long long)arg1 ;
-(void)deleteModelObjectAndUnderlyingData:(id)arg1 ;
-(void)didSelectModelObjectAtIndex:(unsigned long long)arg1 ;
@end

