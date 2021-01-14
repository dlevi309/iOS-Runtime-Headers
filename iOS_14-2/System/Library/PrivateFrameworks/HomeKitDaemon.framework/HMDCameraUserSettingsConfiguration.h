/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@interface HMDCameraUserSettingsConfiguration : HMFObject {

	BOOL _sharingFaceClassificationsEnabled;
	BOOL _importingFromPhotoLibraryEnabled;
	BOOL _owner;

}

@property (getter=isSharingFaceClassificationsEnabled,readonly) BOOL sharingFaceClassificationsEnabled;              //@synthesize sharingFaceClassificationsEnabled=_sharingFaceClassificationsEnabled - In the implementation block
@property (getter=isImportingFromPhotoLibraryEnabled,readonly) BOOL importingFromPhotoLibraryEnabled;                //@synthesize importingFromPhotoLibraryEnabled=_importingFromPhotoLibraryEnabled - In the implementation block
@property (getter=isOwner,readonly) BOOL owner;                                                                      //@synthesize owner=_owner - In the implementation block
-(id)initWithUser:(id)arg1 ;
-(BOOL)isOwner;
-(BOOL)isSharingFaceClassificationsEnabled;
-(BOOL)isImportingFromPhotoLibraryEnabled;
@end

