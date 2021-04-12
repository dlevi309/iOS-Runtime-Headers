/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardHIDEventProcessors.framework/BackBoardHIDEventProcessors
*/

#import <BackBoardHIDEventProcessors/BackBoardHIDEventProcessors-Structs.h>
#import <libobjc.A.dylib/BKHIDEventProcessor.h>

@class NSString;

@interface BKHIDVendorDefinedEventProcessor : NSObject <BKHIDEventProcessor>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)processEvent:(inout _IOHIDEvent*)arg1 sender:(id)arg2 dispatcher:(id)arg3 ;
@end

