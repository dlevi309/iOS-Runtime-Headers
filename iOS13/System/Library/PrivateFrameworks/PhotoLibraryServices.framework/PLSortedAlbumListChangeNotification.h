/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)object;
-(id)_changedObjects;
-(BOOL)shouldReload;
-(BOOL)_getOldSet:(id*)arg1 newSet:(id*)arg2 ;
-(BOOL)countDidChange;
-(id)albumList;
-(id)initWithSortedAlbumList:(id)arg1 albumListChangeNotification:(id)arg2 ;
@end

