/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)_currentRequestID;
-(NSOperationQueue *)_operationQueue;
-(NSObject*<OS_dispatch_queue>)_isolationQueue;
-(NSMutableDictionary *)_operationsByRequestID;
-(long long)prepareIrisVideoWithAsset:(id)arg1 photoTime:(SCD_Struct_IS1)arg2 trimmedTimeRange:(SCD_Struct_IS8)arg3 completion:(/*^block*/id)arg4 ;
-(void)cancelPreparationOfIrisAssetWithRequestID:(long long)arg1 ;
-(long long)prepareIrisPlayerItemWithAsset:(id)arg1 trimmedTimeRange:(SCD_Struct_IS8)arg2 photoTime:(SCD_Struct_IS1)arg3 includeVideo:(BOOL)arg4 includeAudio:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(void)_setCurrentRequestID:(long long)arg1 ;
@end

