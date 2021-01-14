/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <libobjc.A.dylib/PKDashboardItemPresenter.h>

@class PKPassGroupView, UIImageView, NSString;

@interface PKDashboardPassGroupItemPresenter : NSObject <PKDashboardItemPresenter> {

	PKPassGroupView* _groupView;
	UIImageView* _snapshotView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)collectionViewCellClasses;
-(id)cellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(Class)itemClass;
-(void)updateCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4 ;
-(void)didSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 navigationController:(id)arg4 canPresent:(/*^block*/id)arg5 ;
-(CGSize)sizeForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(id)initWithPassGroupView:(id)arg1 ;
-(void)_configureCell:(id)arg1 forItem:(id)arg2 ;
@end

