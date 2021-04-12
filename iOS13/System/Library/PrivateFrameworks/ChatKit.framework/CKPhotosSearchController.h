/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKMessageTypeSearchController.h>
#import <libobjc.A.dylib/QLPreviewControllerDelegate.h>

@class NSString;

@interface CKPhotosSearchController : CKMessageTypeSearchController <QLPreviewControllerDelegate> {

	unsigned long long _contentMode;

}

@property (assign,nonatomic) unsigned long long contentMode;              //@synthesize contentMode=_contentMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sectionTitle;
+(id)reuseIdentifier;
+(id)sectionIdentifier;
+(Class)cellClass;
+(id)indexingString;
+(BOOL)supportsQuicklook;
-(void)setContentMode:(unsigned long long)arg1 ;
-(double)interGroupSpacing;
-(unsigned long long)contentMode;
-(id)filterQueries;
-(id)fetchAttributes;
-(id)chatGUIDForSearchableItem:(id)arg1 ;
-(void)fractionalWidth:(double*)arg1 count:(unsigned long long*)arg2 forLayoutWidth:(unsigned long long)arg3 ;
-(id)queryAttributesForText:(id)arg1 ;
-(id)detailsFilterQueriesForChatGUIDs:(id)arg1 ;
-(id)queryResultsForItems:(id)arg1 ;
-(BOOL)applyLayoutMarginsToLayoutGroup;
-(id)cellForSupplementryItemInCollectionView:(id)arg1 atIndexPath:(id)arg2 supplementryViewKind:(id)arg3 ;
-(void)updateSupplementryViewIfNeeded:(id)arg1 atIndexPath:(id)arg2 ;
-(id)layoutGroupWithEnvironment:(id)arg1 ;
-(id)_additionalMenuActionsForResult:(id)arg1 ;
-(id)_pasteboardItemsForResult:(id)arg1 ;
-(id)_activityItemProviderForResult:(id)arg1 ;
-(id)previewViewControllerForResult:(id)arg1 ;
-(id)initWithSectionIndex:(unsigned long long)arg1 ;
-(double)_internalInterGroupSpacing;
-(BOOL)wantsHeaderSection;
-(void)_filterControlTapped:(id)arg1 ;
-(void)saveAttachmentForResult:(id)arg1 ;
-(Class)headerOverrideClass;
-(NSDirectionalEdgeInsets)additionalGroupInsets;
@end

