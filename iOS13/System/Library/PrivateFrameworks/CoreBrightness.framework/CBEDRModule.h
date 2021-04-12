/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
*/

#import <CoreBrightness/CoreBrightness-Structs.h>
#import <CoreBrightness/CBModule.h>
#import <libobjc.A.dylib/CBContainerModuleProtocol.h>
#import <libobjc.A.dylib/CBHIDServiceProtocol.h>

@class CADisplay, CBDisplayModuleHID, CBColorModuleiOS, NSMutableArray, NSString;

@interface CBEDRModule : CBModule <CBContainerModuleProtocol, CBHIDServiceProtocol> {

	float _currentLux;
	float _currentNits;
	float _maxNits;
	float _Ycomp;
	float _prevLux;
	float _prevNits;
	float _prevMaxNits;
	float _prevYcomp;
	CADisplay* _cadisplay;
	CBDisplayModuleHID* _displayModule;
	CBColorModuleiOS* _colorModule;
	NSMutableArray* _filters;
	NSMutableArray* _alsNodes;

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
-(void)handleALSEvent:(id)arg1 ;
-(BOOL)addHIDServiceClient:(IOHIDServiceClientRef)arg1 ;
-(BOOL)handleHIDEvent:(IOHIDEventRef)arg1 from:(IOHIDServiceClientRef)arg2 ;
-(BOOL)removeHIDServiceClient:(IOHIDServiceClientRef)arg1 ;
-(id)copyPropertyForKey:(id)arg1 withParameter:(id)arg2 ;
-(void)handleNotificationForKey:(id)arg1 withProperty:(id)arg2 ;
-(void)handleHIDEventInternal:(IOHIDEventRef)arg1 from:(IOHIDServiceClientRef)arg2 ;
-(void)handleBrightnessUpdate:(id)arg1 ;
-(void)updateEDRState;
-(void)handleTargetWhitepointUpdate:(id)arg1 ;
-(id)initWithQueue:(id)arg1 display:(id)arg2 colorModule:(id)arg3 andDisplayModule:(id)arg4 ;
@end

