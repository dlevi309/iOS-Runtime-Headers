/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@class NSMutableDictionary;

@interface AVTAvatarColorVariationStore : NSObject {

	NSMutableDictionary* _colorPresets;

}

@property (nonatomic,readonly) NSMutableDictionary * colorPresets;              //@synthesize colorPresets=_colorPresets - In the implementation block
-(id)init;
-(void)resetValues;
-(id)colorVariationFromColor:(id)arg1 ;
-(void)saveColorPreset:(id)arg1 forColor:(id)arg2 ;
-(id)colorPresetFromColor:(id)arg1 ;
-(id)keyForColor:(id)arg1 ;
-(NSMutableDictionary *)colorPresets;
@end

