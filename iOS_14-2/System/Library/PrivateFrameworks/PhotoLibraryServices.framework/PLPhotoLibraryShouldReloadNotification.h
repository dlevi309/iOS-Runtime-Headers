/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLChangeNotification.h>

@class PLPhotoLibrary;

@interface PLPhotoLibraryShouldReloadNotification : PLChangeNotification {

	PLPhotoLibrary* _photoLibrary;

}
-(id)userInfo;
-(id)object;
-(id)name;
-(id)initNotificationWithPhotoLibrary:(id)arg1 ;
@end

