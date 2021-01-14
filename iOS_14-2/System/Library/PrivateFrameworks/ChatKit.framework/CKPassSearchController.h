/*
* Generated on Thursday, January 14, 2021 at 2:21:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKMessageTypeSearchController.h>
#import <libobjc.A.dylib/QLPreviewControllerDelegate.h>

@class NSString;

@interface CKPassSearchController : CKMessageTypeSearchController <QLPreviewControllerDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sectionIdentifier;
+(BOOL)supportsQuicklookForResult:(id)arg1 ;
+(id)sectionTitle;
+(Class)cellClass;
+(unsigned long long)recencyRankedTargetResultCount;
+(id)indexingString;
+(id)reuseIdentifier;
+(BOOL)previewControllerPresentsModally;
-(id)filterQueries;
-(id)fetchAttributes;
-(double)interGroupSpacing;
-(id)chatGUIDForSearchableItem:(id)arg1 ;
-(id)queryAttributesForText:(id)arg1 ;
-(id)detailsFilterQueriesForChatGUIDs:(id)arg1 ;
-(BOOL)applyLayoutMarginsToLayoutGroup;
-(id)cellForSupplementryItemInCollectionView:(id)arg1 atIndexPath:(id)arg2 supplementryViewKind:(id)arg3 ;
-(id)layoutGroupWithEnvironment:(id)arg1 ;
-(id)_activityItemProviderForResult:(id)arg1 ;
-(id)previewViewControllerForResult:(id)arg1 ;
-(id)cellForItemInCollectionView:(id)arg1 atIndex:(long long)arg2 withIdentifier:(id)arg3 ;
@end

