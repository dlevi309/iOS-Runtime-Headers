/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/


@class NSMutableDictionary;

@interface OKProducerPresetsManager : NSObject {

	NSMutableDictionary* _presetsByFamily;

}
+(id)defaultManager;
-(id)init;
-(void)dealloc;
-(id)presetForUniqueIdentifier:(id)arg1 ;
-(id)presetsForFamily:(id)arg1 ;
-(id)defaultPresetsForFamily:(id)arg1 ;
-(id)_presetsByNameForFamily:(id)arg1 ;
-(id)_defaultPresetsByName;
-(id)presetWithUniqueIdentifier:(id)arg1 ;
-(id)defaultPresets;
@end

