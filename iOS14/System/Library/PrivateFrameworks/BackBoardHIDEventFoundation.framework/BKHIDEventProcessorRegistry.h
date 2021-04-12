/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardHIDEventFoundation.framework/BackBoardHIDEventFoundation
*/

#import <libobjc.A.dylib/BKHIDEventProcessorRegistering.h>

@class NSMutableDictionary, NSString;

@interface BKHIDEventProcessorRegistry : NSObject <BKHIDEventProcessorRegistering> {

	NSMutableDictionary* _eventProcessorsByClassName;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)addEventProcessor:(id)arg1 ;
-(id)eventProcessorOfClass:(Class)arg1 ;
@end

