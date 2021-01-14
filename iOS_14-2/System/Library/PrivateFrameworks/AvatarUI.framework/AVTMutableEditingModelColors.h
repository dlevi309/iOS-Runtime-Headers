/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

