/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLContainerChangeNotification.h>

@class NSDictionary, PLManagedAsset;

@interface PLCloudCommentsChangeNotification : PLContainerChangeNotification {

	NSDictionary* _userInfo;

}

@property (nonatomic,readonly) PLManagedAsset * asset; 
+(id)notificationWithAsset:(id)arg1 snapshot:(id)arg2 ;
-(id)description;
-(id)name;
-(id)userInfo;
-(PLManagedAsset *)asset;
-(id)_contentRelationshipName;
@end

