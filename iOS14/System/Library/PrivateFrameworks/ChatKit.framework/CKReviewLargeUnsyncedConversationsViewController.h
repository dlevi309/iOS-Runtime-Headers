/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)tableViewCellReuseIdentifier;
-(Class)tableViewCellClass;
-(void)reloadModelData;
-(unsigned long long)numberOfModelObjects;
-(id)modelObjectAtIndex:(unsigned long long)arg1 ;
-(void)deleteModelObjectAndUnderlyingData:(id)arg1 ;
-(void)didSelectModelObjectAtIndex:(unsigned long long)arg1 ;
-(id)navigationBarTitle;
-(NSArray *)conversations;
@end

