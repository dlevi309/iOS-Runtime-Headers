/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)timestamp;
-(NSString *)clientIdentifier;
-(id)initWithClientIdentifier:(id)arg1 auditUUID:(id)arg2 timestamp:(unsigned long long)arg3 ;
-(NSUUID *)auditUUID;
@end

