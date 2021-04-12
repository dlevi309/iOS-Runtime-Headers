/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

