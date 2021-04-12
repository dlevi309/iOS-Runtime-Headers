/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AVTAvatarSettingKindValue : NSObject <NSCopying> {

	SCD_Struct_AV4 _settingKind;

}

@property (nonatomic,readonly) SCD_Struct_AV4 settingKind;              //@synthesize settingKind=_settingKind - In the implementation block
+(id)valueWithSettingKind:(SCD_Struct_AV4)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCD_Struct_AV4)settingKind;
-(id)initWithSettingKind:(SCD_Struct_AV4)arg1 ;
@end

