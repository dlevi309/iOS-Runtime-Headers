/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
*/

#import <DiagnosticRequestService/DiagnosticRequestService-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface DRSProtoFileDescription : PBCodable <NSCopying> {

	unsigned long long _logSize;
	NSString* _fileName;
	NSString* _logType;
	SCD_Struct_DR1 _has;

}

@property (nonatomic,readonly) BOOL hasLogType; 
@property (nonatomic,retain) NSString * logType;                      //@synthesize logType=_logType - In the implementation block
@property (assign,nonatomic) BOOL hasLogSize; 
@property (assign,nonatomic) unsigned long long logSize;              //@synthesize logSize=_logSize - In the implementation block
@property (nonatomic,readonly) BOOL hasFileName; 
@property (nonatomic,retain) NSString * fileName;                     //@synthesize fileName=_fileName - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)logType;
-(void)setFileName:(NSString *)arg1 ;
-(BOOL)hasFileName;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)logSize;
-(NSString *)fileName;
-(id)description;
-(unsigned long long)hash;
-(BOOL)hasLogType;
-(void)setLogType:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setLogSize:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasLogSize:(BOOL)arg1 ;
-(BOOL)hasLogSize;
@end

