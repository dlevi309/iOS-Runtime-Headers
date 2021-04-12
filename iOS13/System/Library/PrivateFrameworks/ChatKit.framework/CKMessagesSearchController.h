/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKMessageTypeSearchController.h>

@interface CKMessagesSearchController : CKMessageTypeSearchController
+(id)sectionTitle;
+(id)reuseIdentifier;
+(id)sectionIdentifier;
+(Class)cellClass;
+(BOOL)supportsQuicklook;
+(BOOL)supportsMenuInteraction;
-(id)fetchAttributes;
-(unsigned long long)maxResultsForMode:(unsigned long long)arg1 ;
-(id)queryAttributesForText:(id)arg1 ;
-(BOOL)applyLayoutMarginsToLayoutGroup;
-(id)layoutGroupWithEnvironment:(id)arg1 ;
-(void)searchWithText:(id)arg1 mode:(unsigned long long)arg2 ;
-(NSDirectionalEdgeInsets)additionalGroupInsets;
-(id)cellForItemInCollectionView:(id)arg1 atIndex:(long long)arg2 withIdentifier:(id)arg3 ;
@end

