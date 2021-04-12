/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
*/


@protocol OS_dispatch_queue;
#import <PhotosPlayer/PhotosPlayer-Structs.h>
@class NSOperationQueue, NSObject, NSMutableDictionary;

@interface ISVideoAnalyzer : NSObject {

	NSOperationQueue* _operationQueue;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSMutableDictionary* _operationsByRequestID;
	long long __currentRequestID;

}

@property (assign,setter=_setCurrentRequestID:,nonatomic) long long _currentRequestID;              //@synthesize _currentRequestID=__currentRequestID - In the implementation block
+(id)defaultAnalyzer;
-(id)init;
-(long long)_currentRequestID;
-(void)_setCurrentRequestID:(long long)arg1 ;
-(long long)requestFrameTimesAroundTime:(SCD_Struct_IS1)arg1 inAsset:(id)arg2 trackID:(int)arg3 completion:(/*^block*/id)arg4 ;
-(void)_handleAllFrameTimesRequestFinishedForTime:(SCD_Struct_IS1)arg1 frameTimes:(id)arg2 completion:(/*^block*/id)arg3 ;
-(long long)requestAllFrameTimesInAsset:(id)arg1 trackID:(int)arg2 completion:(/*^block*/id)arg3 ;
@end

