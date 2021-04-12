/*
* Generated on Monday, March 1, 2021 at 2:34:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString, NSNumber, NSArray;

@interface CEMAssetBaseReference : CEMPayloadBase {

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
+(id)buildWithDataURL:(id)arg1 withContentType:(id)arg2 withSize:(id)arg3 withHashSHA256:(id)arg4 withCertificatePinningIdentifiers:(id)arg5 ;
+(id)buildRequiredOnlyWithDataURL:(id)arg1 withContentType:(id)arg2 withSize:(id)arg3 withHashSHA256:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPayloadSize:(NSNumber *)arg1 ;
-(NSNumber *)payloadSize;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadDataURL:(NSString *)arg1 ;
-(void)setPayloadContentType:(NSString *)arg1 ;
-(void)setPayloadHashSHA256:(NSString *)arg1 ;
-(void)setPayloadCertificatePinningIdentifiers:(NSArray *)arg1 ;
-(NSString *)payloadDataURL;
-(NSString *)payloadContentType;
-(NSString *)payloadHashSHA256;
-(NSArray *)payloadCertificatePinningIdentifiers;
@end

