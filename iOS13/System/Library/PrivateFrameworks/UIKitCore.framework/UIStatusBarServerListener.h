/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol OS_dispatch_workloop, OS_dispatch_mach;
#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableArray, NSObject, NSMutableDictionary;

@interface UIStatusBarServerListener : NSObject {

	NSMutableArray* _clientPorts;
	NSMutableArray* _publishers;
	NSObject*<OS_dispatch_workloop> _workloop;
	NSObject*<OS_dispatch_mach> _channel;
	SCD_Struct_UI110 _statusBarData;
	SCD_Struct_UI110 _composedStatusBarData;
	SCD_Struct_UI111 _overrides;
	CFDictionaryRef _doubleHeightStatusStrings;
	CFDictionaryRef _glowAnimationStates;
	NSMutableDictionary* _glowAnimationEndTimes;
	BOOL _composedStatusBarDataValid;

}
+(id)sharedInstance;
-(id)init;
-(void)async:(/*^block*/id)arg1 ;
-(id)_publisherForPort:(unsigned)arg1 ;
-(void)_broadcastStatusBarDataWithActions:(int)arg1 animated:(BOOL)arg2 ;
-(void)_broadcastStyleOverrides;
-(SCD_Struct_UI110*)_statusBarData;
-(int)_styleOverrides;
-(void)_setAnimationEndTimesForOverrides:(int)arg1 ;
-(void)_removeAnimationEndTimesForOverrides:(int)arg1 ;
-(double)_glowAnimationEndTimeForStyle:(long long)arg1 ;
-(void)_addClient:(unsigned)arg1 ;
-(void)_removeClient:(CFMachPortRef)arg1 ;
-(void)_removePublisher:(CFMachPortRef)arg1 ;
-(SCD_Struct_UI113*)_statusBarOverrideData;
-(void)_postStatusBarData:(SCD_Struct_UI110*)arg1 actions:(int)arg2 animated:(BOOL)arg3 ;
-(void)_addStyleOverrides:(int)arg1 forPublisher:(id)arg2 ;
-(void)_removeStyleOverrides:(int)arg1 forPublisher:(id)arg2 ;
-(BOOL)_glowAnimationStateForStyle:(long long)arg1 ;
-(void)_postGlowAnimationState:(BOOL)arg1 forStyle:(long long)arg2 ;
-(id)_doubleHeightStatusStringForStyle:(long long)arg1 ;
-(void)_postDoubleHeightStatus:(char*)arg1 forStyle:(long long)arg2 ;
-(void)_postStatusBarOverrideData:(SCD_Struct_UI113*)arg1 ;
-(BOOL)_permanentizeStatusBarOverrideData;
-(void)_addStatusBarItem:(int)arg1 forPublisher:(id)arg2 ;
-(void)_removeStatusBarItem:(int)arg1 forPublisher:(id)arg2 ;
@end

