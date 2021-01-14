/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class NSUUID, NSMutableDictionary;

@interface NTKCompanionFaceCollectionsManager : NSObject {

	NSUUID* _activeDeviceUUID;
	NSMutableDictionary* _faceCollectionsForCollectionIdentifier;
	int _pairedDeviceVersionChangeNotificationToken;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)sharedFaceCollectionForDevice:(id)arg1 forCollectionIdentifier:(id)arg2 ;
-(id)sharedLibraryFaceCollectionsForAllDevices;
@end

