/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
*/


@class NSCache;

@interface NMRTrackAssetAvailabilityManager : NSObject {

	NSCache* _assetAvailabilityCache;

}
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(void)_mediaLibraryDidChangeNotification:(id)arg1 ;
-(long long)availabilityForTrackPID:(id)arg1 ;
@end

