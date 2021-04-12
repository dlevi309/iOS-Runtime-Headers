/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKMessageTypeSearchController.h>
#import <libobjc.A.dylib/CKMessageSearchResultCellDelegate.h>

@class NSString;

@interface CKMessagesSearchController : CKMessageTypeSearchController <CKMessageSearchResultCellDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sectionIdentifier;
+(BOOL)supportsQuicklookForResult:(id)arg1 ;
+(id)sectionTitle;
+(Class)cellClass;
+(BOOL)supportsMenuInteraction;
+(id)reuseIdentifier;
-(void)searchWithText:(id)arg1 mode:(unsigned long long)arg2 ;
-(NSDirectionalEdgeInsets)additionalGroupInsets;
-(id)fetchAttributes;
-(id)customLayoutSectionForEnvironment:(id)arg1 ;
-(unsigned long long)maxResultsForMode:(unsigned long long)arg1 ;
-(id)queryAttributesForText:(id)arg1 ;
-(BOOL)applyLayoutMarginsToLayoutGroup;
-(double)widthForDeterminingAvatarVisibility;
-(id)cellForItemInCollectionView:(id)arg1 atIndex:(long long)arg2 withIdentifier:(id)arg3 ;
@end

