/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface VCPClientDatabaseManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _databases;

}
+(id)sharedDatabaseForPhotoLibrary:(id)arg1 ;
+(id)sharedDatabaseManager;
-(id)init;
-(id)sharedDatabaseForPhotoLibrary:(id)arg1 ;
@end

