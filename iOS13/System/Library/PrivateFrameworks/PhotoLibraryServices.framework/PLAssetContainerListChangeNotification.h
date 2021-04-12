/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLContainerChangeNotification.h>

@class NSDictionary;

@interface PLAssetContainerListChangeNotification : PLContainerChangeNotification {

	NSDictionary* _userInfo;

}

@property (nonatomic,readonly) id<PLAssetContainerList> assetContainerList; 
@property (nonatomic,readonly) NSObject*<PLAlbumContainer> albumList; 
+(id)notificationWithContainerList:(id)arg1 snapshot:(id)arg2 changedContainers:(id)arg3 ;
-(id)description;
-(id)name;
-(id)userInfo;
-(id)_contentRelationshipName;
-(id<PLAssetContainerList>)assetContainerList;
-(NSObject*<PLAlbumContainer>)albumList;
@end

