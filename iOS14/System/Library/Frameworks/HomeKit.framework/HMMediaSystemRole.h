/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface HMMediaSystemRole : NSObject <NSSecureCoding> {

	unsigned long long _type;

}

@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)leftRole;
+(BOOL)roleFromDictionary:(id)arg1 roleOutput:(unsigned long long*)arg2 ;
+(id)rightRole;
-(id)serialize;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithRole:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

