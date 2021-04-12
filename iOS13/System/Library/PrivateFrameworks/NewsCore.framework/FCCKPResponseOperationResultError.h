/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_FC1 _has;

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
-(void)dealloc;
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
-(FCCKPResponseOperationResultErrorServer *)serverError;
-(void)setClientError:(FCCKPResponseOperationResultErrorClient *)arg1 ;
-(FCCKPResponseOperationResultErrorClient *)clientError;
-(BOOL)hasErrorDescription;
-(void)setServerError:(FCCKPResponseOperationResultErrorServer *)arg1 ;
-(BOOL)hasErrorKey;
-(NSString *)errorKey;
-(BOOL)hasRetryAfterSeconds;
-(BOOL)hasClientError;
-(BOOL)hasServerError;
-(BOOL)hasExtensionError;
-(void)setExtensionError:(FCCKPResponseOperationResultErrorExtension *)arg1 ;
-(void)setErrorKey:(NSString *)arg1 ;
-(void)setRetryAfterSeconds:(int)arg1 ;
-(void)setHasRetryAfterSeconds:(BOOL)arg1 ;
-(FCCKPResponseOperationResultErrorExtension *)extensionError;
@end

