/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKMessageTypeSearchController.h>

@interface CKLinkSearchController : CKMessageTypeSearchController
+(id)sectionTitle;
+(id)reuseIdentifier;
+(id)sectionIdentifier;
+(Class)cellClass;
+(id)indexingString;
-(double)interGroupSpacing;
-(id)filterQueries;
-(id)fetchAttributes;
-(id)queryAttributesForText:(id)arg1 ;
-(id)detailsFilterQueriesForChatGUIDs:(id)arg1 ;
-(id)queryResultsForItems:(id)arg1 ;
-(void)postProcessAndUpdateResults:(id)arg1 ;
-(BOOL)applyLayoutMarginsToLayoutGroup;
-(id)cellForSupplementryItemInCollectionView:(id)arg1 atIndexPath:(id)arg2 supplementryViewKind:(id)arg3 ;
-(void)updateSupplementryViewIfNeeded:(id)arg1 atIndexPath:(id)arg2 ;
-(id)layoutGroupWithEnvironment:(id)arg1 ;
-(Class)_richLinkDatasourceClass;
-(id)_additionalMenuActionsForResult:(id)arg1 ;
-(id)_pasteboardItemsForResult:(id)arg1 ;
-(id)_activityItemProviderForResult:(id)arg1 ;
-(void)deleteAttachmentForResult:(id)arg1 ;
-(BOOL)shouldStartMenuInteractionForResult:(id)arg1 ;
-(id)previewViewControllerForResult:(id)arg1 ;
-(BOOL)handleSelectionForResult:(id)arg1 ;
@end

