/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLContainerChangeNotification.h>

@class NSDictionary, PLManagedAsset;

@interface PLCloudCommentsChangeNotification : PLContainerChangeNotification {

	NSDictionary* _userInfo;

}

@property (nonatomic,readonly) PLManagedAsset * asset; 
+(id)notificationWithAsset:(id)arg1 snapshot:(id)arg2 ;
-(id)userInfo;
-(PLManagedAsset *)asset;
-(id)name;
-(id)description;
-(id)_contentRelationshipName;
@end

