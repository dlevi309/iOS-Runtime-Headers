/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AVTAvatarSettingKindValue : NSObject <NSCopying> {

	SCD_Struct_AV4 _settingKind;

}

@property (nonatomic,readonly) SCD_Struct_AV4 settingKind;              //@synthesize settingKind=_settingKind - In the implementation block
+(id)valueWithSettingKind:(SCD_Struct_AV4)arg1 ;
-(SCD_Struct_AV4)settingKind;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithSettingKind:(SCD_Struct_AV4)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

