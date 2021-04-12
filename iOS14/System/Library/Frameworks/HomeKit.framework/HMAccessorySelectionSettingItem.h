/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString, HMAccessorySelectionSetting;

@interface HMAccessorySelectionSettingItem : NSObject <NSCopying, NSSecureCoding> {

	NSUUID* _identifier;
	NSString* _title;
	HMAccessorySelectionSetting* _setting;

}

@property (__weak) HMAccessorySelectionSetting * setting;              //@synthesize setting=_setting - In the implementation block
@property (copy,readonly) NSString * keyPath; 
@property (copy,readonly) NSUUID * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) NSString * title;                            //@synthesize title=_title - In the implementation block
@property (copy,readonly) NSString * localizedTitle; 
+(BOOL)supportsSecureCoding;
-(id)initWithTitle:(id)arg1 ;
-(NSString *)localizedTitle;
-(HMAccessorySelectionSetting *)setting;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)keyPath;
-(NSUUID *)identifier;
-(void)setSetting:(HMAccessorySelectionSetting *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

