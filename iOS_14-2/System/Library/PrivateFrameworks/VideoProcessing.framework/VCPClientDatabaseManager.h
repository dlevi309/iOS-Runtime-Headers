/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface VCPClientDatabaseManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _databases;

}
+(id)sharedDatabaseManager;
+(id)sharedDatabaseForPhotoLibrary:(id)arg1 ;
-(id)init;
-(id)sharedDatabaseForPhotoLibrary:(id)arg1 ;
@end

