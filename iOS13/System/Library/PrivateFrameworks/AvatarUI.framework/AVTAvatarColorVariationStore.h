/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@class NSMutableDictionary;

@interface AVTAvatarColorVariationStore : NSObject {

	NSMutableDictionary* _colorPresets;

}

@property (nonatomic,readonly) NSMutableDictionary * colorPresets;              //@synthesize colorPresets=_colorPresets - In the implementation block
-(id)init;
-(void)resetValues;
-(NSMutableDictionary *)colorPresets;
-(id)colorVariationFromColor:(id)arg1 ;
-(void)saveColorPreset:(id)arg1 forColor:(id)arg2 ;
-(id)colorPresetFromColor:(id)arg1 ;
-(id)keyForColor:(id)arg1 ;
@end

