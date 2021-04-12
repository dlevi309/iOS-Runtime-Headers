/*
* Generated on Monday, March 1, 2021 at 2:34:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HIDDisplay.framework/HIDDisplay
*/

#import <HIDDisplay/HIDDisplayInterface.h>

@class NSDictionary, NSArray;

@interface HIDDisplayPresetInterface : HIDDisplayInterface {

	NSDictionary* _usageElementMap;
	NSArray* _presets;

}

@property (readonly) NSArray * presets;              //@synthesize presets=_presets - In the implementation block
-(id)capabilities;
-(id)initWithContainerID:(id)arg1 ;
-(id)initWithService:(unsigned)arg1 ;
-(NSArray *)presets;
-(id)getHIDDevices;
-(id)initWithMatching:(id)arg1 ;
-(BOOL)setupPresets;
-(void)createPresets;
-(id)getHIDElementForUsage:(long long)arg1 ;
-(long long)getFactoryDefaultPresetIndex:(id*)arg1 ;
-(long long)getActivePresetIndex:(id*)arg1 ;
-(BOOL)setActivePresetIndex:(long long)arg1 error:(id*)arg2 ;
-(BOOL)setCurrentPresetIndex:(long long)arg1 error:(id*)arg2 ;
-(long long)getCurrentPresetIndex:(id*)arg1 ;
@end

