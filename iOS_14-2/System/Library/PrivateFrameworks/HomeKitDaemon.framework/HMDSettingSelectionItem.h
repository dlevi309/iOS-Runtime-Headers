/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString;

@interface HMDSettingSelectionItem : NSObject <NSCopying, NSSecureCoding> {

	NSUUID* _identifier;
	NSString* _title;

}

@property (copy,readonly) NSUUID * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) NSString * title;                 //@synthesize title=_title - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithTitle:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

