/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLChangeNotification.h>

@class UIImage, NSString;

@interface PLCameraPreviewImageWellChangeNotification : PLChangeNotification {

	UIImage* _image;
	NSString* _uuid;

}

@property (nonatomic,readonly) UIImage * image; 
@property (nonatomic,readonly) NSString * assetUUID; 
+(id)notification;
-(id)init;
-(id)description;
-(id)name;
-(id)object;
-(id)userInfo;
-(id)_init;
-(UIImage *)image;
-(NSString *)assetUUID;
@end

