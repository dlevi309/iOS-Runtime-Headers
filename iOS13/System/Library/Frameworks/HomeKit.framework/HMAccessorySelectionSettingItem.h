/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(NSString *)keyPath;
-(NSString *)title;
-(NSString *)localizedTitle;
-(id)initWithTitle:(id)arg1 ;
-(HMAccessorySelectionSetting *)setting;
-(void)setSetting:(HMAccessorySelectionSetting *)arg1 ;
@end

