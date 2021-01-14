/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementModel.framework/RemoteManagementModel
*/

#import <RemoteManagementModel/RemoteManagementModel-Structs.h>
#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString, NSNumber, NSArray;

@interface RMModelAssetBaseReference : RMModelPayloadBase {

	NSString* _payloadDataURL;
	NSString* _payloadContentType;
	NSNumber* _payloadSize;
	NSString* _payloadHashSHA256;
	NSArray* _payloadCertificatePinningIdentifiers;

}

@property (nonatomic,copy) NSString * payloadDataURL;                                   //@synthesize payloadDataURL=_payloadDataURL - In the implementation block
@property (nonatomic,copy) NSString * payloadContentType;                               //@synthesize payloadContentType=_payloadContentType - In the implementation block
@property (nonatomic,copy) NSNumber * payloadSize;                                      //@synthesize payloadSize=_payloadSize - In the implementation block
@property (nonatomic,copy) NSString * payloadHashSHA256;                                //@synthesize payloadHashSHA256=_payloadHashSHA256 - In the implementation block
@property (nonatomic,copy) NSArray * payloadCertificatePinningIdentifiers;              //@synthesize payloadCertificatePinningIdentifiers=_payloadCertificatePinningIdentifiers - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithDataURL:(id)arg1 contentType:(id)arg2 size:(id)arg3 hashSHA256:(id)arg4 certificatePinningIdentifiers:(id)arg5 ;
+(id)buildRequiredOnlyWithDataURL:(id)arg1 contentType:(id)arg2 size:(id)arg3 hashSHA256:(id)arg4 ;
-(NSNumber *)payloadSize;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPayloadDataURL:(NSString *)arg1 ;
-(void)setPayloadContentType:(NSString *)arg1 ;
-(void)setPayloadSize:(NSNumber *)arg1 ;
-(void)setPayloadHashSHA256:(NSString *)arg1 ;
-(void)setPayloadCertificatePinningIdentifiers:(NSArray *)arg1 ;
-(NSString *)payloadDataURL;
-(NSString *)payloadContentType;
-(NSString *)payloadHashSHA256;
-(NSArray *)payloadCertificatePinningIdentifiers;
-(id)serializeWithType:(short)arg1 ;
-(BOOL)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
@end

