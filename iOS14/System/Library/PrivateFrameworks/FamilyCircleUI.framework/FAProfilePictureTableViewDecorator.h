/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/

#import <FamilyCircleUI/FATableViewDecorator.h>

@class RUITableView, FAProfilePictureStore;

@interface FAProfilePictureTableViewDecorator : FATableViewDecorator {

	RUITableView* _remoteTableViewController;
	FAProfilePictureStore* _pictureStore;

}
+(BOOL)shouldShowPicturesInPage:(id)arg1 ;
+(BOOL)_shouldShowPictureInSection:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)dealloc;
-(id)initWithTableView:(id)arg1 ruiTableView:(id)arg2 pictureStore:(id)arg3 ;
-(void)_profilePictureStoreDidReload;
@end

