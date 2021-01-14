/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
*/

#import <AccessibilityUIUtilities/AXUISettingsSetupCapableListController.h>

@class NSArray;

@interface AXUISettingsBaseListController : AXUISettingsSetupCapableListController {

	BOOL _detailItemsHidden;
	NSArray* _detailItems;

}

@property (nonatomic,retain) NSArray * detailItems;               //@synthesize detailItems=_detailItems - In the implementation block
@property (assign,nonatomic) BOOL detailItemsHidden;              //@synthesize detailItemsHidden=_detailItemsHidden - In the implementation block
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(NSArray *)detailItems;
-(id)cellForSpecifier:(id)arg1 ;
-(void)setDetailItemsHidden:(BOOL)arg1 ;
-(id)specifiersByRemovingDetailItemsFromOriginalSpecifiers:(id)arg1 ifHidden:(BOOL)arg2 ;
-(id)specifierForKey:(id)arg1 ;
-(void)updateTableCheckedSelection:(id)arg1 ;
-(void)updateVisibleCellsWithCheckedSelection:(id)arg1 ;
-(id)cellForSpecifierID:(id)arg1 ;
-(id)specifierForIndexPath:(id)arg1 ;
-(void)showController:(id)arg1 withSpecifier:(id)arg2 ;
-(void)setDetailItems:(NSArray *)arg1 ;
-(BOOL)detailItemsHidden;
@end

