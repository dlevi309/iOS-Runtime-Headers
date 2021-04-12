/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FCCKPResponseOperationResultErrorClient, NSString, FCCKPResponseOperationResultErrorExtension, FCCKPResponseOperationResultErrorServer;

@interface FCCKPResponseOperationResultError : PBCodable <NSCopying> {

	FCCKPResponseOperationResultErrorClient* _clientError;
	NSString* _errorDescription;
	NSString* _errorKey;
	FCCKPResponseOperationResultErrorExtension* _extensionError;
	int _retryAfterSeconds;
	FCCKPResponseOperationResultErrorServer* _serverError;
	SCD_Struct_FC4 _has;

}

@property (nonatomic,readonly) BOOL hasClientError; 
@property (nonatomic,retain) FCCKPResponseOperationResultErrorClient * clientError;                    //@synthesize clientError=_clientError - In the implementation block
@property (nonatomic,readonly) BOOL hasServerError; 
@property (nonatomic,retain) FCCKPResponseOperationResultErrorServer * serverError;                    //@synthesize serverError=_serverError - In the implementation block
@property (nonatomic,readonly) BOOL hasExtensionError; 
@property (nonatomic,retain) FCCKPResponseOperationResultErrorExtension * extensionError;              //@synthesize extensionError=_extensionError - In the implementation block
@property (assign,nonatomic) BOOL hasRetryAfterSeconds; 
@property (assign,nonatomic) int retryAfterSeconds;                                                    //@synthesize retryAfterSeconds=_retryAfterSeconds - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorDescription; 
@property (nonatomic,retain) NSString * errorDescription;                                              //@synthesize errorDescription=_errorDescription - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorKey; 
@property (nonatomic,retain) NSString * errorKey;                                                      //@synthesize errorKey=_errorKey - In the implementation block
-(id)dictionaryRepresentation;
-(void)setClientError:(FCCKPResponseOperationResultErrorClient *)arg1 ;
-(NSString *)errorKey;
-(FCCKPResponseOperationResultErrorServer *)serverError;
-(void)mergeFrom:(id)arg1 ;
-(void)setRetryAfterSeconds:(int)arg1 ;
-(void)setServerError:(FCCKPResponseOperationResultErrorServer *)arg1 ;
-(BOOL)hasErrorKey;
-(FCCKPResponseOperationResultErrorClient *)clientError;
-(BOOL)hasErrorDescription;
-(id)description;
-(BOOL)hasClientError;
-(void)setExtensionError:(FCCKPResponseOperationResultErrorExtension *)arg1 ;
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
-(FCCKPResponseOperationResultErrorExtension *)extensionError;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setHasRetryAfterSeconds:(BOOL)arg1 ;
@end

