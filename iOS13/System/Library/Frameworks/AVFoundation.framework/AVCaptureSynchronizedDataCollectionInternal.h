/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVCaptureOutput, AVCaptureSynchronizedData, NSArray;

@interface AVCaptureSynchronizedDataCollectionInternal : NSObject {

	AVCaptureOutput* dataOutputs[4];
	AVCaptureSynchronizedData* synchronizedData[4];
	char count;
	unsigned long long changeSeed;
	SCD_Struct_AV7 creationTime;
	NSArray* possibleDataOutputs;

}
@end

