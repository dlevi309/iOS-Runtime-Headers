/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithContentPreviewSetting:(long long)arg1 spokenNotificationSetting:(long long)arg2 ;
-(long long)globalContentPreviewSetting;
-(void)setGlobalContentPreviewSetting:(long long)arg1 ;
-(long long)globalSpokenNotificationSetting;
-(void)setGlobalSpokenNotificationSetting:(long long)arg1 ;
@end

