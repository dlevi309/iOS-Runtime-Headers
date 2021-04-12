/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)handleHIDEvent:(IOHIDEventRef)arg1 from:(IOHIDServiceClientRef)arg2 ;
-(BOOL)removeHIDServiceClient:(IOHIDServiceClientRef)arg1 ;
-(id)copyPropertyForKey:(id)arg1 ;
-(void)start;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(id)copyPropertyForKey:(id)arg1 withParameter:(id)arg2 ;
-(void)handleNotificationForKey:(id)arg1 withProperty:(id)arg2 ;
-(void)stop;
-(void)handleHIDEventInternal:(IOHIDEventRef)arg1 from:(IOHIDServiceClientRef)arg2 ;
-(void)handleALSEvent:(id)arg1 ;
-(BOOL)addHIDServiceClient:(IOHIDServiceClientRef)arg1 ;
-(void)dealloc;
-(void)handleBrightnessUpdate:(id)arg1 ;
-(void)updateEDRState;
-(void)handleTargetWhitepointUpdate:(id)arg1 ;
-(id)initWithQueue:(id)arg1 display:(id)arg2 colorModule:(id)arg3 andDisplayModule:(id)arg4 ;
@end

