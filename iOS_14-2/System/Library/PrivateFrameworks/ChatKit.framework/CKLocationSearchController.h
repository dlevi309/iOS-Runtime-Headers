/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKMessageTypeSearchController.h>
#import <libobjc.A.dylib/QLPreviewControllerDelegate.h>

@class NSString;

@interface CKLocationSearchController : CKMessageTypeSearchController <QLPreviewControllerDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sectionIdentifier;
+(id)sectionTitle;
+(Class)cellClass;
+(id)indexingString;
+(id)reuseIdentifier;
-(id)filterQueries;
-(id)fetchAttributes;
-(double)interGroupSpacing;
-(id)chatGUIDForSearchableItem:(id)arg1 ;
-(void)fractionalWidth:(double*)arg1 count:(unsigned long long*)arg2 forLayoutWidth:(unsigned long long)arg3 ;
-(id)queryAttributesForText:(id)arg1 ;
-(id)detailsFilterQueriesForChatGUIDs:(id)arg1 ;
-(BOOL)applyLayoutMarginsToLayoutGroup;
-(void)updateSupplementryViewIfNeeded:(id)arg1 atIndexPath:(id)arg2 ;
-(id)cellForSupplementryItemInCollectionView:(id)arg1 atIndexPath:(id)arg2 supplementryViewKind:(id)arg3 ;
-(id)layoutGroupWithEnvironment:(id)arg1 ;
-(id)itemProviderForSearchResult:(id)arg1 ;
-(id)_activityItemProviderForResult:(id)arg1 ;
-(BOOL)shouldStartMenuInteractionForResult:(id)arg1 ;
-(id)previewViewControllerForResult:(id)arg1 ;
-(BOOL)handleSelectionForResult:(id)arg1 ;
-(id)_mapItemForResult:(id)arg1 ;
-(id)urlForQueryResult:(id)arg1 ;
-(id)additionalMenuElementsForResult:(id)arg1 ;
@end

