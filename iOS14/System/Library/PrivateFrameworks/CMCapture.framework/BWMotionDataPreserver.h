/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


#import <CMCapture/CMCapture-Structs.h>
@class NSString, NSMutableData;

@interface BWMotionDataPreserver : NSObject {

	NSString* _name;
	NSMutableData* _preservedISPMotionData;
	unsigned long long _lengthOfInitialISPMotionData;
	int _sampleCountOfInitialISPMotionData;
	NSMutableData* _preservedISPHallData;
	unsigned long long _lengthOfInitialISPHallData;
	int _sampleCountOfInitialISPHallData;
	NSString* _currentISPHallPortType;

}
+(void)initialize;
-(BOOL)_preserveMotionDataForSampleBuffer:(opaqueCMSampleBufferRef)arg1 willBeDropped:(BOOL)arg2 ;
-(BOOL)prependPreservedMotionDataToSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(id)initWithName:(id)arg1 ;
-(BOOL)preserveMotionDataForSoonToBeDroppedSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)reset;
-(void)dealloc;
@end

