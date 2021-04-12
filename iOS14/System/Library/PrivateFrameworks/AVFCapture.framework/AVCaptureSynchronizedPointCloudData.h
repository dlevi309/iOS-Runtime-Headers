/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVCaptureSynchronizedData.h>

@class AVPointCloudData;

@interface AVCaptureSynchronizedPointCloudData : AVCaptureSynchronizedData {

	AVPointCloudData* _pointCloudData;
	BOOL _pointCloudDataWasDropped;
	long long _droppedReason;

}

@property (readonly) AVPointCloudData * pointCloudData; 
@property (readonly) BOOL pointCloudDataWasDropped; 
@property (readonly) long long droppedReason; 
-(id)_initWithPointCloudDataBuffer:(id)arg1 timestamp:(SCD_Struct_AV0)arg2 pointCloudDataWasDropped:(BOOL)arg3 droppedReason:(long long)arg4 ;
-(AVPointCloudData *)pointCloudData;
-(long long)droppedReason;
-(BOOL)pointCloudDataWasDropped;
-(void)dealloc;
@end

