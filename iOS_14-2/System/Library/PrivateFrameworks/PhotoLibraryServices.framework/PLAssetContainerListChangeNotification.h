/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)userInfo;
-(id)name;
-(id)description;
-(NSObject*<PLAlbumContainer>)albumList;
-(id)_contentRelationshipName;
-(id<PLAssetContainerList>)assetContainerList;
@end

