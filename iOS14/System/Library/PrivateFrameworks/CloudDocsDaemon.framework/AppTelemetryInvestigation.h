/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface AppTelemetryInvestigation : PBCodable <NSCopying> {

	long long _errorCode;
	NSString* _errorDescription;
	NSString* _errorDomain;
	NSData* _zoneName;
	BOOL _sharedZone;
	SCD_Struct_BR3 _has;

}

@property (nonatomic,readonly) BOOL hasZoneName; 
@property (nonatomic,retain) NSData * zoneName; 
@property (assign,nonatomic) BOOL hasSharedZone; 
@property (assign,nonatomic) BOOL sharedZone; 
@property (nonatomic,readonly) BOOL hasErrorDomain; 
@property (nonatomic,retain) NSString * errorDomain; 
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) long long errorCode; 
@property (nonatomic,readonly) BOOL hasErrorDescription; 
@property (nonatomic,retain) NSString * errorDescription; 
-(id)dictionaryRepresentation;
-(NSString *)errorDomain;
-(BOOL)hasErrorDomain;
-(NSData *)zoneName;
-(void)mergeFrom:(id)arg1 ;
-(long long)errorCode;
-(BOOL)hasErrorCode;
-(BOOL)hasErrorDescription;
-(id)description;
-(BOOL)sharedZone;
-(void)setSharedZone:(BOOL)arg1 ;
-(NSString *)errorDescription;
-(BOOL)hasZoneName;
-(unsigned long long)hash;
-(void)setErrorDescription:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setErrorCode:(long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setZoneName:(NSData *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setErrorDomain:(NSString *)arg1 ;
-(void)setHasSharedZone:(BOOL)arg1 ;
-(BOOL)hasSharedZone;
@end

