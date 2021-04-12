/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)uuid;
-(id)context;
-(id)initWithUUID:(id)arg1 andAccountID:(id)arg2 ;
-(NSString *)accountID;
@end

