/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
*/


@protocol OS_dispatch_queue;
#import <PhotosPlayer/PhotosPlayer-Structs.h>
@class NSOperationQueue, NSObject, NSMutableDictionary;

@interface ISPlayerItemChef : NSObject {

	NSOperationQueue* __operationQueue;
	NSObject*<OS_dispatch_queue> __isolationQueue;
	NSMutableDictionary* __operationsByRequestID;
	long long __currentRequestID;

}

@property (nonatomic,readonly) NSOperationQueue * _operationQueue;                                  //@synthesize _operationQueue=__operationQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _isolationQueue;                        //@synthesize _isolationQueue=__isolationQueue - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _operationsByRequestID;                        //@synthesize _operationsByRequestID=__operationsByRequestID - In the implementation block
@property (assign,setter=_setCurrentRequestID:,nonatomic) long long _currentRequestID;              //@synthesize _currentRequestID=__currentRequestID - In the implementation block
+(id)defaultChef;
-(id)init;
-(NSOperationQueue *)_operationQueue;
-(NSObject*<OS_dispatch_queue>)_isolationQueue;
-(long long)_currentRequestID;
-(void)_setCurrentRequestID:(long long)arg1 ;
-(NSMutableDictionary *)_operationsByRequestID;
-(long long)prepareIrisVideoWithAsset:(id)arg1 photoTime:(SCD_Struct_IS1)arg2 trimmedTimeRange:(SCD_Struct_IS10)arg3 completion:(/*^block*/id)arg4 ;
-(void)cancelPreparationOfIrisAssetWithRequestID:(long long)arg1 ;
-(long long)prepareIrisPlayerItemWithAsset:(id)arg1 trimmedTimeRange:(SCD_Struct_IS10)arg2 photoTime:(SCD_Struct_IS1)arg3 includeVideo:(BOOL)arg4 includeAudio:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
@end

