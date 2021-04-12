/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureSynchronizedData.h>

@class AVPointCloudData;

@interface AVCaptureSynchronizedPointCloudData : AVCaptureSynchronizedData {

	AVPointCloudData* _pointCloudData;
	BOOL _pointCloudDataWasDropped;
	long long _droppedReason;

}

@property (readonly) AVPointCloudData * pointCloudData; 
@property (readonly) BOOL pointCloudDataWasDropped; 
@property (readonly) long long droppedReason; 
-(void)dealloc;
-(long long)droppedReason;
-(BOOL)pointCloudDataWasDropped;
-(id)_initWithPointCloudDataBuffer:(id)arg1 timestamp:(SCD_Struct_AV7)arg2 pointCloudDataWasDropped:(BOOL)arg3 droppedReason:(long long)arg4 ;
-(AVPointCloudData *)pointCloudData;
@end

