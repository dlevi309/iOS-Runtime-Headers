/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPResponseOperationResultErrorAuxiliaryError, CKDPResponseOperationResultErrorClient, NSString, CKDPResponseOperationResultErrorExtension, CKDPResponseOperationResultErrorServer;

@interface CKDPResponseOperationResultError : PBCodable <NSCopying> {

	CKDPResponseOperationResultErrorAuxiliaryError* _auxiliaryError;
	CKDPResponseOperationResultErrorClient* _clientError;
	NSString* _errorDescription;
	NSString* _errorInternal;
	NSString* _errorKey;
	CKDPResponseOperationResultErrorExtension* _extensionError;
	int _retryAfterSeconds;
	CKDPResponseOperationResultErrorServer* _serverError;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasClientError; 
@property (nonatomic,retain) CKDPResponseOperationResultErrorClient * clientError;                         //@synthesize clientError=_clientError - In the implementation block
@property (nonatomic,readonly) BOOL hasServerError; 
@property (nonatomic,retain) CKDPResponseOperationResultErrorServer * serverError;                         //@synthesize serverError=_serverError - In the implementation block
@property (nonatomic,readonly) BOOL hasExtensionError; 
@property (nonatomic,retain) CKDPResponseOperationResultErrorExtension * extensionError;                   //@synthesize extensionError=_extensionError - In the implementation block
@property (nonatomic,readonly) BOOL hasAuxiliaryError; 
@property (nonatomic,retain) CKDPResponseOperationResultErrorAuxiliaryError * auxiliaryError;              //@synthesize auxiliaryError=_auxiliaryError - In the implementation block
@property (assign,nonatomic) BOOL hasRetryAfterSeconds; 
@property (assign,nonatomic) int retryAfterSeconds;                                                        //@synthesize retryAfterSeconds=_retryAfterSeconds - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorDescription; 
@property (nonatomic,retain) NSString * errorDescription;                                                  //@synthesize errorDescription=_errorDescription - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorKey; 
@property (nonatomic,retain) NSString * errorKey;                                                          //@synthesize errorKey=_errorKey - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorInternal; 
@property (nonatomic,retain) NSString * errorInternal;                                                     //@synthesize errorInternal=_errorInternal - In the implementation block
-(id)dictionaryRepresentation;
-(void)setClientError:(CKDPResponseOperationResultErrorClient *)arg1 ;
-(NSString *)errorKey;
-(CKDPResponseOperationResultErrorServer *)serverError;
-(void)mergeFrom:(id)arg1 ;
-(void)setRetryAfterSeconds:(int)arg1 ;
-(void)setServerError:(CKDPResponseOperationResultErrorServer *)arg1 ;
-(BOOL)hasErrorKey;
-(CKDPResponseOperationResultErrorClient *)clientError;
-(BOOL)hasErrorDescription;
-(id)description;
-(BOOL)hasClientError;
-(void)setExtensionError:(CKDPResponseOperationResultErrorExtension *)arg1 ;
-(BOOL)hasRetryAfterSeconds;
-(NSString *)errorDescription;
-(unsigned long long)hash;
-(void)setErrorKey:(NSString *)arg1 ;
-(void)setErrorDescription:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasExtensionError;
-(BOOL)hasServerError;
-(int)retryAfterSeconds;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(CKDPResponseOperationResultErrorExtension *)extensionError;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasRetryAfterSeconds:(BOOL)arg1 ;
-(BOOL)hasAuxiliaryError;
-(CKDPResponseOperationResultErrorAuxiliaryError *)auxiliaryError;
-(void)setErrorInternal:(NSString *)arg1 ;
-(void)setAuxiliaryError:(CKDPResponseOperationResultErrorAuxiliaryError *)arg1 ;
-(BOOL)hasErrorInternal;
-(NSString *)errorInternal;
@end

