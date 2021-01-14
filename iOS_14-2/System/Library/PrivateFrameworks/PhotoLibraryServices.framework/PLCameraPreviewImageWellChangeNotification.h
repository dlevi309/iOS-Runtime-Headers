/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)userInfo;
-(id)init;
-(id)object;
-(UIImage *)image;
-(id)name;
-(NSString *)assetUUID;
-(id)description;
-(id)_init;
@end

