/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardHIDEventFoundation.framework/BackBoardHIDEventFoundation
*/

#import <BackBoardHIDEventFoundation/BackBoardHIDEventFoundation-Structs.h>
#import <libobjc.A.dylib/BKHIDEventRecognizer.h>

@class NSArray, NSString;

@interface BKHIDEventSequenceRecognizer : NSObject <BKHIDEventRecognizer> {

	long long _descriptorIndex;
	BOOL _shouldConsumeEvents;
	NSArray* _descriptors;

}

@property (assign,nonatomic) BOOL shouldConsumeEvents;              //@synthesize shouldConsumeEvents=_shouldConsumeEvents - In the implementation block
@property (nonatomic,readonly) NSArray * descriptors;               //@synthesize descriptors=_descriptors - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)recognizerForEventDescriptor:(id)arg1 ;
+(id)recognizerForEventDescriptors:(id)arg1 ;
-(NSArray *)descriptors;
-(long long)processEvent:(IOHIDEventRef)arg1 shouldConsume:(BOOL*)arg2 ;
-(BOOL)shouldConsumeEvents;
-(void)setShouldConsumeEvents:(BOOL)arg1 ;
@end

