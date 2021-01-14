/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/


@class NSMutableDictionary;

@interface OKProducerPresetsManager : NSObject {

	NSMutableDictionary* _presetsByFamily;

}
+(id)defaultManager;
-(id)presetForUniqueIdentifier:(id)arg1 ;
-(id)presetsForFamily:(id)arg1 ;
-(id)init;
-(id)defaultPresetsForFamily:(id)arg1 ;
-(void)dealloc;
-(id)_presetsByNameForFamily:(id)arg1 ;
-(id)_defaultPresetsByName;
-(id)presetWithUniqueIdentifier:(id)arg1 ;
-(id)defaultPresets;
@end

