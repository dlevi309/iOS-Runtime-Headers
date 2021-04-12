/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/PKContactlessInterfaceSessionDelegate.h>

@class NSString;

@interface PKContactlessInterfaceSessionDefaultBehavior : NSObject <PKContactlessInterfaceSessionDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)attachDefaultBehaviorToSession:(id)arg1 ;
-(void)contactlessInterfaceSession:(id)arg1 didEndPersistentCardEmulationWithContext:(id)arg2 ;
-(void)contactlessInterfaceSession:(id)arg1 didFinishTransactionWithContext:(id)arg2 ;
-(void)_processContext:(id)arg1 ;
@end

