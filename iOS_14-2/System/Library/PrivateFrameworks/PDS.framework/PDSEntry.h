/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PDS.framework/PDS
*/

#import <PDS/PDS-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PDSUser, PDSRegistration, NSString;

@interface PDSEntry : NSObject <NSSecureCoding, NSCopying> {

	unsigned char _state;
	PDSUser* _user;
	PDSRegistration* _registration;
	NSString* _clientID;

}

@property (nonatomic,readonly) PDSUser * user;                              //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) PDSRegistration * registration;              //@synthesize registration=_registration - In the implementation block
@property (nonatomic,readonly) unsigned char state;                         //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSString * clientID;                         //@synthesize clientID=_clientID - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)clientID;
-(PDSRegistration *)registration;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqualToEntry:(id)arg1 ;
-(id)description;
-(PDSUser *)user;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(unsigned char)state;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithUser:(id)arg1 registration:(id)arg2 clientID:(id)arg3 state:(unsigned char)arg4 ;
-(id)initWithUser:(id)arg1 registration:(id)arg2 clientID:(id)arg3 ;
-(id)entryWithUpdatedState:(unsigned char)arg1 ;
@end

