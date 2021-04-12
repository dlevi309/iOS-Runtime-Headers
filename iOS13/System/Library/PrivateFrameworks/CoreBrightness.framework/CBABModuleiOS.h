/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
*/

#import <CoreBrightness/CoreBrightness-Structs.h>
#import <CoreBrightness/CBModule.h>
#import <libobjc.A.dylib/CBHIDServiceProtocol.h>
#import <libobjc.A.dylib/CBContainerModuleProtocol.h>

@class CBDisplayModuleiOS, NSMutableArray, NSString;

@interface CBABModuleiOS : CBModule <CBHIDServiceProtocol, CBContainerModuleProtocol> {

	AABC* _AABC;
	CBDisplayModuleiOS* _display;
	NSMutableArray* _alsServiceClients;
	NSMutableArray* _otherServiceClients;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)stop;
-(void)start;
-(id)copyPropertyForKey:(id)arg1 ;
-(BOOL)addHIDServiceClient:(IOHIDServiceClientRef)arg1 ;
-(BOOL)handleHIDEvent:(IOHIDEventRef)arg1 from:(IOHIDServiceClientRef)arg2 ;
-(BOOL)removeHIDServiceClient:(IOHIDServiceClientRef)arg1 ;
-(void)sendNotificationForKey:(id)arg1 withValue:(id)arg2 ;
-(id)copyPropertyForKey:(id)arg1 withParameter:(id)arg2 ;
-(void)handleNotificationForKey:(id)arg1 withProperty:(id)arg2 ;
-(id)initWithDisplayModule:(id)arg1 andQueue:(id)arg2 ;
@end

