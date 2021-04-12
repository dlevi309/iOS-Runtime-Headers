/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface BBGlobalSettings : NSObject <NSCopying, NSSecureCoding> {

	long long _globalContentPreviewSetting;
	long long _globalSpokenNotificationSetting;

}

@property (assign,nonatomic) long long globalContentPreviewSetting;                  //@synthesize globalContentPreviewSetting=_globalContentPreviewSetting - In the implementation block
@property (assign,nonatomic) long long globalSpokenNotificationSetting;              //@synthesize globalSpokenNotificationSetting=_globalSpokenNotificationSetting - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setGlobalSpokenNotificationSetting:(long long)arg1 ;
-(long long)globalSpokenNotificationSetting;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setGlobalContentPreviewSetting:(long long)arg1 ;
-(id)initWithContentPreviewSetting:(long long)arg1 spokenNotificationSetting:(long long)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)globalContentPreviewSetting;
@end

