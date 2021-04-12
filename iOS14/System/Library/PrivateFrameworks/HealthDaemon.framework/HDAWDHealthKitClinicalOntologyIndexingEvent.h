/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HDAWDHealthKitClinicalOntologyIndexingEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _failingAction;
	NSString* _failingKeyPath;
	SCD_Struct_HD7 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasFailingKeyPath; 
@property (nonatomic,retain) NSString * failingKeyPath;                 //@synthesize failingKeyPath=_failingKeyPath - In the implementation block
@property (nonatomic,readonly) BOOL hasFailingAction; 
@property (nonatomic,retain) NSString * failingAction;                  //@synthesize failingAction=_failingAction - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setFailingKeyPath:(NSString *)arg1 ;
-(void)setFailingAction:(NSString *)arg1 ;
-(BOOL)hasFailingKeyPath;
-(BOOL)hasFailingAction;
-(NSString *)failingKeyPath;
-(NSString *)failingAction;
@end

