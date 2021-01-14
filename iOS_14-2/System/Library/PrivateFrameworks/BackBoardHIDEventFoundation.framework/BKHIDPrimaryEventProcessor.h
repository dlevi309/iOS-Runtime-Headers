/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardHIDEventFoundation.framework/BackBoardHIDEventFoundation
*/

#import <BackBoardHIDEventFoundation/BackBoardHIDEventFoundation-Structs.h>
#import <libobjc.A.dylib/BKHIDEventProcessor.h>

@protocol BKHIDEventProcessor;
@class NSArray, NSString;

@interface BKHIDPrimaryEventProcessor : NSObject <BKHIDEventProcessor> {

	NSArray* _subProcessors[40];
	id<BKHIDEventProcessor> _defaultProcessor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)processEvent:(inout _IOHIDEvent*)arg1 sender:(id)arg2 dispatcher:(id)arg3 ;
-(id)initWithSubProcessors:(id)arg1 defaultProcessor:(id)arg2 ;
-(id)_eventProcessorsForEventType:(unsigned)arg1 ;
@end

