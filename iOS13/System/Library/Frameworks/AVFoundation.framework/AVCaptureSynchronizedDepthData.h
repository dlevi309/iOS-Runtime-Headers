/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureSynchronizedData.h>

@class AVCaptureSynchronizedDepthDataInternal, AVDepthData;

@interface AVCaptureSynchronizedDepthData : AVCaptureSynchronizedData {

	AVCaptureSynchronizedDepthDataInternal* _internal;

}

@property (readonly) AVDepthData * depthData; 
@property (readonly) BOOL depthDataWasDropped; 
@property (readonly) long long droppedReason; 
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(AVDepthData *)depthData;
-(long long)droppedReason;
-(BOOL)depthDataWasDropped;
-(id)_initWithDepthData:(id)arg1 timestamp:(SCD_Struct_AV7)arg2 depthDataWasDropped:(BOOL)arg3 droppedReason:(long long)arg4 ;
@end

