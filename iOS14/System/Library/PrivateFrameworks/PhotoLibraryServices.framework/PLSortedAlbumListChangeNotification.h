/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLAssetContainerListChangeNotification.h>

@class PLSortedAlbumList, PLAssetContainerListChangeNotification;

@interface PLSortedAlbumListChangeNotification : PLAssetContainerListChangeNotification {

	PLSortedAlbumList* _albumList;
	PLAssetContainerListChangeNotification* _backingNotification;

}
+(id)notificationForDerivedObject:(id)arg1 priorChangeState:(id)arg2 forBackingObjectNotification:(id)arg3 ;
-(id)init;
-(id)object;
-(BOOL)shouldReload;
-(id)description;
-(id)albumList;
-(BOOL)_getOldSet:(id*)arg1 newSet:(id*)arg2 ;
-(BOOL)countDidChange;
-(id)_changedObjects;
-(id)initWithSortedAlbumList:(id)arg1 albumListChangeNotification:(id)arg2 ;
@end

