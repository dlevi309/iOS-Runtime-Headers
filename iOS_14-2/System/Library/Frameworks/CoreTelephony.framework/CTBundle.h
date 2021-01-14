/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CTBundle : NSObject <NSCopying, NSSecureCoding> {

	long long _type;

}

@property (assign,nonatomic) long long type;              //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(id)description;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithBundleType:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

