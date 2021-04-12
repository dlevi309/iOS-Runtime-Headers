/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)sectionTitle;
+(id)reuseIdentifier;
+(id)sectionIdentifier;
+(Class)cellClass;
+(id)indexingString;
-(double)interGroupSpacing;
-(id)filterQueries;
-(id)fetchAttributes;
-(id)chatGUIDForSearchableItem:(id)arg1 ;
-(id)queryAttributesForText:(id)arg1 ;
-(id)detailsFilterQueriesForChatGUIDs:(id)arg1 ;
-(BOOL)applyLayoutMarginsToLayoutGroup;
-(id)cellForSupplementryItemInCollectionView:(id)arg1 atIndexPath:(id)arg2 supplementryViewKind:(id)arg3 ;
-(void)updateSupplementryViewIfNeeded:(id)arg1 atIndexPath:(id)arg2 ;
-(id)layoutGroupWithEnvironment:(id)arg1 ;
-(id)_additionalMenuActionsForResult:(id)arg1 ;
-(id)_pasteboardItemsForResult:(id)arg1 ;
-(id)_activityItemProviderForResult:(id)arg1 ;
-(BOOL)shouldStartMenuInteractionForResult:(id)arg1 ;
-(id)previewViewControllerForResult:(id)arg1 ;
-(id)_mapItemForResult:(id)arg1 ;
@end

