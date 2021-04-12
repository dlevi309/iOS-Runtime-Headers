/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)errorDescription;
-(void)setErrorDescription:(NSString *)arg1 ;
-(int)retryAfterSeconds;
-(CKDPResponseOperationResultErrorServer *)serverError;
-(void)setClientError:(CKDPResponseOperationResultErrorClient *)arg1 ;
-(CKDPResponseOperationResultErrorClient *)clientError;
-(BOOL)hasErrorDescription;
-(void)setServerError:(CKDPResponseOperationResultErrorServer *)arg1 ;
-(BOOL)hasErrorKey;
-(NSString *)errorKey;
-(BOOL)hasRetryAfterSeconds;
-(BOOL)hasClientError;
-(BOOL)hasServerError;
-(BOOL)hasExtensionError;
-(void)setExtensionError:(CKDPResponseOperationResultErrorExtension *)arg1 ;
-(void)setErrorKey:(NSString *)arg1 ;
-(void)setRetryAfterSeconds:(int)arg1 ;
-(void)setHasRetryAfterSeconds:(BOOL)arg1 ;
-(CKDPResponseOperationResultErrorExtension *)extensionError;
-(BOOL)hasAuxiliaryError;
-(CKDPResponseOperationResultErrorAuxiliaryError *)auxiliaryError;
-(void)setErrorInternal:(NSString *)arg1 ;
-(void)setAuxiliaryError:(CKDPResponseOperationResultErrorAuxiliaryError *)arg1 ;
-(BOOL)hasErrorInternal;
-(NSString *)errorInternal;
@end

