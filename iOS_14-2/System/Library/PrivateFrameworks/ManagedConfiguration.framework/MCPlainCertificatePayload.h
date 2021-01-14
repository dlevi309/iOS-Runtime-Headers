/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(int)dataEncoding;
-(BOOL)isSigned;
-(SecCertificateRef)copyCertificate;
-(id)installationWarnings;
-(NSData *)certificateData;
-(BOOL)isIdentity;
-(NSString *)password;
-(id)persistentResourceID;
-(NSString *)certificateFileName;
-(id)verboseDescription;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
@end

