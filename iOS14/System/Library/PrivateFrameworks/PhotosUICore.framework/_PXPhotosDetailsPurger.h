/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class NSHashTable, NSPointerArray;

@interface _PXPhotosDetailsPurger : NSObject {

	NSHashTable* _allViewControllers;
	NSPointerArray* _lastUsedViewControllers;

}
+(id)sharedPurger;
-(id)init;
-(void)purgeOldViewControllers;
-(void)detailsViewControllerDidAppear:(id)arg1 ;
-(void)_purgeAllViewControllers;
-(void)didReceiveMemoryWarning:(id)arg1 ;
@end

