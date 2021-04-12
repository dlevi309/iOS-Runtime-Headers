/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKContactsSearchManagerDelegate <NSObject>
@property (assign,nonatomic) BOOL shouldHideGroupsDonations; 
@required
-(void)setShouldHideGroupsDonations:(BOOL)arg1;
-(void)contactsSearchManager:(id)arg1 finishedSearchingWithResults:(id)arg2;
-(id)conversationCacheForContactsSearchManager:(id)arg1;
-(BOOL)shouldHideGroupsDonations;

@end

