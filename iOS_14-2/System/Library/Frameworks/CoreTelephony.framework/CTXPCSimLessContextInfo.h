/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString;

@interface CTXPCSimLessContextInfo : NSObject <NSCopying, NSSecureCoding> {

	NSUUID* _uuid;
	NSString* _accountID;

}

@property (nonatomic,readonly) NSUUID * uuid;                     //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSString * accountID;              //@synthesize accountID=_accountID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)contextWithUUID:(id)arg1 andAccountID:(id)arg2 ;
-(NSString *)accountID;
-(NSUUID *)uuid;
-(id)initWithUUID:(id)arg1 andAccountID:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)context;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

