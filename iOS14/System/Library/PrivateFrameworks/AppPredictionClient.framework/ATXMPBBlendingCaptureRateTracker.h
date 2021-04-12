/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <AppPredictionClient/AppPredictionClient-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ATXMPBBlendingCaptureRateTracker : PBCodable <NSCopying> {

	NSString* _abGroup;
	int _captureType;
	NSString* _consumerSubType;
	NSString* _executableType;
	BOOL _captured;
	SCD_Struct_AT5 _has;

}

@property (nonatomic,readonly) BOOL hasConsumerSubType; 
@property (nonatomic,retain) NSString * consumerSubType;              //@synthesize consumerSubType=_consumerSubType - In the implementation block
@property (assign,nonatomic) BOOL hasCaptured; 
@property (assign,nonatomic) BOOL captured;                           //@synthesize captured=_captured - In the implementation block
@property (assign,nonatomic) BOOL hasCaptureType; 
@property (assign,nonatomic) int captureType;                         //@synthesize captureType=_captureType - In the implementation block
@property (nonatomic,readonly) BOOL hasExecutableType; 
@property (nonatomic,retain) NSString * executableType;               //@synthesize executableType=_executableType - In the implementation block
@property (nonatomic,readonly) BOOL hasAbGroup; 
@property (nonatomic,retain) NSString * abGroup;                      //@synthesize abGroup=_abGroup - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)consumerSubType;
-(BOOL)hasConsumerSubType;
-(void)setConsumerSubType:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setCaptureType:(int)arg1 ;
-(NSString *)executableType;
-(id)description;
-(int)captureType;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)abGroup;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)captured;
-(BOOL)hasAbGroup;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setExecutableType:(NSString *)arg1 ;
-(BOOL)hasExecutableType;
-(void)setAbGroup:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setCaptured:(BOOL)arg1 ;
-(void)setHasCaptured:(BOOL)arg1 ;
-(BOOL)hasCaptured;
-(void)setHasCaptureType:(BOOL)arg1 ;
-(BOOL)hasCaptureType;
-(id)captureTypeAsString:(int)arg1 ;
-(int)StringAsCaptureType:(id)arg1 ;
@end

