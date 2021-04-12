/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/

#import <libobjc.A.dylib/ARUICelebrationsMapStore.h>

@class NSMapTable, NSString;

@interface ARUICelebrationsMap : NSObject <ARUICelebrationsMapStore> {

	NSMapTable* _sparksCelebrationMap;
	NSMapTable* _wavesCelebrationMap;
	unsigned long long _celebrationCount;

}

@property (nonatomic,readonly) unsigned long long celebrationCount;              //@synthesize celebrationCount=_celebrationCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)storeSparksCelebration:(id)arg1 withRing:(id)arg2 ;
-(void)setRingGroupControllers:(id)arg1 ;
-(void)storeWavesCelebration:(id)arg1 withRing:(id)arg2 ;
-(id)initWithRingGroupControllers:(id)arg1 ;
-(id)sparksCelebrationMap;
-(id)wavesCelebrationMap;
-(unsigned long long)celebrationCount;
@end

