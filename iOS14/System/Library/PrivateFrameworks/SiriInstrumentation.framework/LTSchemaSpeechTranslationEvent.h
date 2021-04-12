/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class LTSchemaTask, NSString, LTSchemaError, NSData;

@interface LTSchemaSpeechTranslationEvent : PBCodable {

	LTSchemaTask* _task;
	NSString* _sessionID;
	NSString* _requestID;
	BOOL _inRestrictedMode;
	BOOL _isAutomaticLID;
	LTSchemaError* _error;
	int _uiMode;
	NSString* _mobileAssetConfigVersion;
	SCD_Struct_LT0 _has;
	BOOL _hasTask;
	BOOL _hasSessionID;
	BOOL _hasRequestID;
	BOOL _hasError;
	BOOL _hasMobileAssetConfigVersion;

}

@property (nonatomic,retain) LTSchemaTask * task;                            //@synthesize task=_task - In the implementation block
@property (assign,nonatomic) BOOL hasTask;                                   //@synthesize hasTask=_hasTask - In the implementation block
@property (nonatomic,copy) NSString * sessionID;                             //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) BOOL hasSessionID;                              //@synthesize hasSessionID=_hasSessionID - In the implementation block
@property (nonatomic,copy) NSString * requestID;                             //@synthesize requestID=_requestID - In the implementation block
@property (assign,nonatomic) BOOL hasRequestID;                              //@synthesize hasRequestID=_hasRequestID - In the implementation block
@property (assign,nonatomic) BOOL inRestrictedMode;                          //@synthesize inRestrictedMode=_inRestrictedMode - In the implementation block
@property (assign,nonatomic) BOOL hasInRestrictedMode; 
@property (assign,nonatomic) BOOL isAutomaticLID;                            //@synthesize isAutomaticLID=_isAutomaticLID - In the implementation block
@property (assign,nonatomic) BOOL hasIsAutomaticLID; 
@property (nonatomic,retain) LTSchemaError * error;                          //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) BOOL hasError;                                  //@synthesize hasError=_hasError - In the implementation block
@property (assign,nonatomic) int uiMode;                                     //@synthesize uiMode=_uiMode - In the implementation block
@property (assign,nonatomic) BOOL hasUiMode; 
@property (nonatomic,copy) NSString * mobileAssetConfigVersion;              //@synthesize mobileAssetConfigVersion=_mobileAssetConfigVersion - In the implementation block
@property (assign,nonatomic) BOOL hasMobileAssetConfigVersion;               //@synthesize hasMobileAssetConfigVersion=_hasMobileAssetConfigVersion - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)hasSessionID;
-(id)dictionaryRepresentation;
-(NSString *)sessionID;
-(void)setSessionID:(NSString *)arg1 ;
-(LTSchemaTask *)task;
-(NSData *)jsonData;
-(void)setHasError:(BOOL)arg1 ;
-(void)setTask:(LTSchemaTask *)arg1 ;
-(int)uiMode;
-(void)setError:(LTSchemaError *)arg1 ;
-(LTSchemaError *)error;
-(NSString *)requestID;
-(id)initWithDictionary:(id)arg1 ;
-(void)setHasSessionID:(BOOL)arg1 ;
-(BOOL)hasTask;
-(unsigned long long)hash;
-(void)setRequestID:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasError;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasRequestID;
-(void)setHasRequestID:(BOOL)arg1 ;
-(void)setHasTask:(BOOL)arg1 ;
-(void)setInRestrictedMode:(BOOL)arg1 ;
-(void)setIsAutomaticLID:(BOOL)arg1 ;
-(void)setUiMode:(int)arg1 ;
-(void)setMobileAssetConfigVersion:(NSString *)arg1 ;
-(NSString *)mobileAssetConfigVersion;
-(BOOL)inRestrictedMode;
-(BOOL)isAutomaticLID;
-(BOOL)hasInRestrictedMode;
-(void)setHasInRestrictedMode:(BOOL)arg1 ;
-(BOOL)hasIsAutomaticLID;
-(void)setHasIsAutomaticLID:(BOOL)arg1 ;
-(BOOL)hasUiMode;
-(void)setHasUiMode:(BOOL)arg1 ;
-(BOOL)hasMobileAssetConfigVersion;
-(void)setHasMobileAssetConfigVersion:(BOOL)arg1 ;
@end

