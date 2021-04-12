/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/ActionKit-Structs.h>
#import <libobjc.A.dylib/WFNaming.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WFAppearanceSettingValue : NSObject <WFNaming, NSSecureCoding, NSCopying> {

	long long _setting;

}

@property (nonatomic,readonly) long long setting;                   //@synthesize setting=_setting - In the implementation block
@property (nonatomic,copy,readonly) NSString * wfName; 
+(BOOL)supportsSecureCoding;
-(long long)setting;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithSetting:(long long)arg1 ;
-(NSString *)wfName;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)valueByInvertingSetting;
-(BOOL)isDarkModeOn;
@end

