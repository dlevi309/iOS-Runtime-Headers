/*
* Generated on Thursday, January 14, 2021 at 2:21:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

