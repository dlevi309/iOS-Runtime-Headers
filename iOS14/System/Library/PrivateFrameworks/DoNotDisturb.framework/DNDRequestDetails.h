/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
*/

#import <DoNotDisturb/DoNotDisturb-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID;

@interface DNDRequestDetails : NSObject <NSCopying, NSSecureCoding> {

	NSString* _clientIdentifier;
	NSUUID* _auditUUID;
	unsigned long long _timestamp;

}

@property (nonatomic,copy,readonly) NSString * clientIdentifier;              //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * auditUUID;                       //@synthesize auditUUID=_auditUUID - In the implementation block
@property (nonatomic,readonly) unsigned long long timestamp;                  //@synthesize timestamp=_timestamp - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)detailsRepresentingNowWithClientIdentifier:(id)arg1 ;
-(unsigned long long)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(NSUUID *)auditUUID;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)clientIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithClientIdentifier:(id)arg1 auditUUID:(id)arg2 timestamp:(unsigned long long)arg3 ;
@end

