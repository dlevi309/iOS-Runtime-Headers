/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <ManagedConfiguration/MCProfile.h>

@class NSString, NSArray, NSData;

@interface MCProfileServiceProfile : MCProfile {

	NSString* _URLString;
	NSArray* _deviceAttributes;
	id _challenge;
	NSData* _enrollmentIdentityPersistentID;
	BOOL _confirmInstallation;
	BOOL _supportedServerVersion;
	NSArray* _bogusPayloads;

}

@property (nonatomic,retain) NSString * URLString;                                 //@synthesize URLString=_URLString - In the implementation block
@property (nonatomic,retain) NSData * enrollmentIdentityPersistentID;              //@synthesize enrollmentIdentityPersistentID=_enrollmentIdentityPersistentID - In the implementation block
@property (nonatomic,retain,readonly) NSArray * deviceAttributes;                  //@synthesize deviceAttributes=_deviceAttributes - In the implementation block
@property (nonatomic,retain,readonly) id challenge;                                //@synthesize challenge=_challenge - In the implementation block
@property (nonatomic,readonly) BOOL confirmInstallation;                           //@synthesize confirmInstallation=_confirmInstallation - In the implementation block
@property (nonatomic,readonly) BOOL supportedServerVersion;                        //@synthesize supportedServerVersion=_supportedServerVersion - In the implementation block
-(NSString *)URLString;
-(id)initWithDictionary:(id)arg1 signerCerts:(id)arg2 allowEmptyPayload:(BOOL)arg3 outError:(id*)arg4 ;
-(id)managedPayloads;
-(id)localizedPayloadSummaryByType;
-(id)localizedManagedPayloadSummaryByType;
-(id)_badDataTypeErrorWithFieldName:(id)arg1 ;
-(NSArray *)deviceAttributes;
-(id)_unsupportedValueErrorWithFieldName:(id)arg1 value:(id)arg2 ;
-(NSData *)enrollmentIdentityPersistentID;
-(BOOL)confirmInstallation;
-(void)setEnrollmentIdentityPersistentID:(NSData *)arg1 ;
-(BOOL)supportedServerVersion;
-(id)serializedDictionary;
-(id)verboseDescription;
-(id)description;
-(id)challenge;
-(void)setURLString:(NSString *)arg1 ;
-(id)payloads;
-(id)stubDictionary;
@end

