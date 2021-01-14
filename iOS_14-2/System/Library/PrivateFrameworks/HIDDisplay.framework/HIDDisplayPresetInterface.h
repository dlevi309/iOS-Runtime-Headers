/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)presets;
-(id)initWithService:(unsigned)arg1 ;
-(id)initWithContainerID:(id)arg1 ;
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

