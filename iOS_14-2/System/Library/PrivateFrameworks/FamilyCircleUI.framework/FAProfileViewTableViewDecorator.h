/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/

#import <FamilyCircleUI/FATableViewDecorator.h>

@class RUITableView, FAFamilyMember, FAProfilePictureStore, NSMutableDictionary;

@interface FAProfileViewTableViewDecorator : FATableViewDecorator {

	RUITableView* _remoteTableViewController;
	FAFamilyMember* _familyMember;
	FAProfilePictureStore* _pictureStore;
	NSMutableDictionary* _profileViewForCells;

}
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithTableView:(id)arg1 ruiTableView:(id)arg2 forPerson:(id)arg3 pictureStore:(id)arg4 ;
-(id)_keyForCell:(id)arg1 ;
-(id)_profileViewForCell:(id)arg1 ;
-(id)_getOrCreateProfileViewForCell:(id)arg1 ;
-(void)_addProfileViewToCell:(id)arg1 ;
-(void)_removeProfileViewFromCell:(id)arg1 ;
@end

