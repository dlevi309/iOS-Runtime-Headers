/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


#import <Celestial/Celestial-Structs.h>
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
-(void)dealloc;
-(id)initWithName:(id)arg1 ;
-(void)reset;
-(BOOL)preserveMotionDataForSoonToBeDroppedSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(BOOL)prependPreservedMotionDataToSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(BOOL)_preserveMotionDataForSampleBuffer:(opaqueCMSampleBufferRef)arg1 willBeDropped:(BOOL)arg2 ;
@end

