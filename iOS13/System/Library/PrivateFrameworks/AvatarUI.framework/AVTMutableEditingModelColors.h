/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <AvatarUI/AVTEditingModelColors.h>

@class NSMutableDictionary;

@interface AVTMutableEditingModelColors : AVTEditingModelColors {

	NSMutableDictionary* _mutableStorage;

}

@property (nonatomic,readonly) NSMutableDictionary * mutableStorage;              //@synthesize mutableStorage=_mutableStorage - In the implementation block
-(id)initWithStorage:(id)arg1 variationStore:(id)arg2 ;
-(void)setColor:(id)arg1 forSettingKind:(SCD_Struct_AV4)arg2 identifier:(id)arg3 ;
-(id)initWithVariationStore:(id)arg1 ;
-(NSMutableDictionary *)mutableStorage;
@end

