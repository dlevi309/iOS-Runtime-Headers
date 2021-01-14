/*
* Generated on Thursday, January 14, 2021 at 2:21:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKMessageTypeSearchController.h>

@interface CKLinkSearchController : CKMessageTypeSearchController
+(id)sectionIdentifier;
+(id)sectionTitle;
+(Class)cellClass;
+(id)indexingString;
+(id)reuseIdentifier;
-(id)filterQueries;
-(id)fetchAttributes;
-(double)interGroupSpacing;
-(id)queryAttributesForText:(id)arg1 ;
-(id)detailsFilterQueriesForChatGUIDs:(id)arg1 ;
-(id)queryResultsForItems:(id)arg1 ;
-(Class)_richLinkDatasourceClass;
-(void)postProcessAndUpdateResults:(id)arg1 ;
-(BOOL)applyLayoutMarginsToLayoutGroup;
-(void)updateSupplementryViewIfNeeded:(id)arg1 atIndexPath:(id)arg2 ;
-(id)cellForSupplementryItemInCollectionView:(id)arg1 atIndexPath:(id)arg2 supplementryViewKind:(id)arg3 ;
-(id)layoutGroupWithEnvironment:(id)arg1 ;
-(id)_additionalMenuElementsForResult:(id)arg1 ;
-(id)itemProviderForSearchResult:(id)arg1 ;
-(id)_activityItemProviderForResult:(id)arg1 ;
-(void)deleteAttachmentForResult:(id)arg1 ;
-(BOOL)shouldStartMenuInteractionForResult:(id)arg1 ;
-(id)previewViewControllerForResult:(id)arg1 ;
-(BOOL)handleSelectionForResult:(id)arg1 ;
@end

