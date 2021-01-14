/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKCDPCodeServiceRequestAccountConfig, CKCDPCodeServiceRequestAssetAuthorizeGetRequestOptions, NSMutableArray, NSString, CKCDPCodeServiceRequestProtectedCloudComputeMetadata, CKCDPCodeServiceRequestRequestContext, NSData;

@interface CKCDPCodeServiceRequest : PBRequest <NSCopying> {

	CKCDPCodeServiceRequestAccountConfig* _accountConfig;
	CKCDPCodeServiceRequestAssetAuthorizeGetRequestOptions* _assetAuthorizeGetRequestOptions;
	NSMutableArray* _clientConfigs;
	NSString* _functionName;
	CKCDPCodeServiceRequestProtectedCloudComputeMetadata* _protectedCloudComputeMetadata;
	CKCDPCodeServiceRequestRequestContext* _requestContext;
	NSData* _routingToken;
	int _serializationFormat;
	NSData* _serializedParameters;
	NSString* _serviceName;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasServiceName; 
@property (nonatomic,retain) NSString * serviceName;                                                                                //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,readonly) BOOL hasFunctionName; 
@property (nonatomic,retain) NSString * functionName;                                                                               //@synthesize functionName=_functionName - In the implementation block
@property (nonatomic,readonly) BOOL hasSerializedParameters; 
@property (nonatomic,retain) NSData * serializedParameters;                                                                         //@synthesize serializedParameters=_serializedParameters - In the implementation block
@property (assign,nonatomic) BOOL hasSerializationFormat; 
@property (assign,nonatomic) int serializationFormat;                                                                               //@synthesize serializationFormat=_serializationFormat - In the implementation block
@property (nonatomic,retain) NSMutableArray * clientConfigs;                                                                        //@synthesize clientConfigs=_clientConfigs - In the implementation block
@property (nonatomic,readonly) BOOL hasAccountConfig; 
@property (nonatomic,retain) CKCDPCodeServiceRequestAccountConfig * accountConfig;                                                  //@synthesize accountConfig=_accountConfig - In the implementation block
@property (nonatomic,readonly) BOOL hasRequestContext; 
@property (nonatomic,retain) CKCDPCodeServiceRequestRequestContext * requestContext;                                                //@synthesize requestContext=_requestContext - In the implementation block
@property (nonatomic,readonly) BOOL hasAssetAuthorizeGetRequestOptions; 
@property (nonatomic,retain) CKCDPCodeServiceRequestAssetAuthorizeGetRequestOptions * assetAuthorizeGetRequestOptions;              //@synthesize assetAuthorizeGetRequestOptions=_assetAuthorizeGetRequestOptions - In the implementation block
@property (nonatomic,readonly) BOOL hasProtectedCloudComputeMetadata; 
@property (nonatomic,retain) CKCDPCodeServiceRequestProtectedCloudComputeMetadata * protectedCloudComputeMetadata;                  //@synthesize protectedCloudComputeMetadata=_protectedCloudComputeMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasRoutingToken; 
@property (nonatomic,retain) NSData * routingToken;                                                                                 //@synthesize routingToken=_routingToken - In the implementation block
+(Class)clientConfigType;
-(id)dictionaryRepresentation;
-(NSMutableArray *)clientConfigs;
-(unsigned long long)clientConfigsCount;
-(id)clientConfigAtIndex:(unsigned long long)arg1 ;
-(void)setClientConfigs:(NSMutableArray *)arg1 ;
-(BOOL)hasServiceName;
-(void)addClientConfig:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(CKCDPCodeServiceRequestRequestContext *)requestContext;
-(NSString *)functionName;
-(BOOL)hasRequestContext;
-(id)description;
-(void)clearClientConfigs;
-(void)setFunctionName:(NSString *)arg1 ;
-(NSString *)serviceName;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(NSData *)serializedParameters;
-(void)setSerializedParameters:(NSData *)arg1 ;
-(void)setRequestContext:(CKCDPCodeServiceRequestRequestContext *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setAssetAuthorizeGetRequestOptions:(CKCDPCodeServiceRequestAssetAuthorizeGetRequestOptions *)arg1 ;
-(CKCDPCodeServiceRequestAssetAuthorizeGetRequestOptions *)assetAuthorizeGetRequestOptions;
-(void)setSerializationFormat:(int)arg1 ;
-(void)setProtectedCloudComputeMetadata:(CKCDPCodeServiceRequestProtectedCloudComputeMetadata *)arg1 ;
-(BOOL)hasFunctionName;
-(BOOL)hasSerializedParameters;
-(BOOL)hasProtectedCloudComputeMetadata;
-(CKCDPCodeServiceRequestProtectedCloudComputeMetadata *)protectedCloudComputeMetadata;
-(BOOL)hasAssetAuthorizeGetRequestOptions;
-(void)setRoutingToken:(NSData *)arg1 ;
-(BOOL)hasRoutingToken;
-(NSData *)routingToken;
-(void)setAccountConfig:(CKCDPCodeServiceRequestAccountConfig *)arg1 ;
-(int)serializationFormat;
-(void)setHasSerializationFormat:(BOOL)arg1 ;
-(BOOL)hasSerializationFormat;
-(id)serializationFormatAsString:(int)arg1 ;
-(int)StringAsSerializationFormat:(id)arg1 ;
-(BOOL)hasAccountConfig;
-(CKCDPCodeServiceRequestAccountConfig *)accountConfig;
@end

