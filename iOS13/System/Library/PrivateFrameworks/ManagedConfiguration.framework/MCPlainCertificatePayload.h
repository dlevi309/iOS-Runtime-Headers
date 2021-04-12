/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <ManagedConfiguration/ManagedConfiguration-Structs.h>
#import <ManagedConfiguration/MCCertificatePayload.h>

@class NSString, NSData;

@interface MCPlainCertificatePayload : MCCertificatePayload {

	NSString* _certificateFileName;
	NSData* _certificateData;
	NSString* _password;
	int _dataEncoding;

}

@property (nonatomic,retain,readonly) NSString * certificateFileName;              //@synthesize certificateFileName=_certificateFileName - In the implementation block
@property (nonatomic,retain,readonly) NSData * certificateData;                    //@synthesize certificateData=_certificateData - In the implementation block
@property (nonatomic,readonly) int dataEncoding;                                   //@synthesize dataEncoding=_dataEncoding - In the implementation block
@property (nonatomic,retain,readonly) NSString * password;                         //@synthesize password=_password - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)description;
-(NSString *)password;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(SecCertificateRef)copyCertificate;
-(id)installationWarnings;
-(BOOL)isIdentity;
-(BOOL)isSigned;
-(id)persistentResourceID;
-(NSString *)certificateFileName;
-(int)dataEncoding;
-(NSData *)certificateData;
@end

