/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudServices.framework/CloudServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface SecureBackupBeginPasscodeRequestResults : NSObject <NSSecureCoding> {

	NSString* _iCloudEnvironment;
	NSString* _escrowFederation;
	NSData* _cert;
	NSString* _dsid;
	NSString* _uuid;

}

@property (readonly) NSString * iCloudEnvironment;              //@synthesize iCloudEnvironment=_iCloudEnvironment - In the implementation block
@property (readonly) NSString * escrowFederation;               //@synthesize escrowFederation=_escrowFederation - In the implementation block
@property (readonly) NSData * cert;                             //@synthesize cert=_cert - In the implementation block
@property (readonly) NSString * dsid;                           //@synthesize dsid=_dsid - In the implementation block
@property (readonly) NSString * uuid;                           //@synthesize uuid=_uuid - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)dsid;
-(NSString *)uuid;
-(NSData *)cert;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)iCloudEnvironment;
-(NSString *)escrowFederation;
-(id)initWithStoredCertificate:(id)arg1 uuid:(id)arg2 ;
@end

