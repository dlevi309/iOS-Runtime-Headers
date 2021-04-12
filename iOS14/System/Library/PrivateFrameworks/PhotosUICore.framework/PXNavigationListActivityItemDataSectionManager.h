/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXNavigationListItemDataSectionManager.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@class PXForYouBadgeManager, NSString;

@interface PXNavigationListActivityItemDataSectionManager : PXNavigationListItemDataSectionManager <PXChangeObserver> {

	PXForYouBadgeManager* _badgeManager;

}

@property (nonatomic,readonly) PXForYouBadgeManager * badgeManager;              //@synthesize badgeManager=_badgeManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateSharedAlbumBadges;
-(PXForYouBadgeManager *)badgeManager;
-(id)initWithItem:(id)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

