/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HDAWDHealthKitExperimentalCondition : PBCodable <NSCopying> {

	long long _testCondition;
	NSString* _experimentIdentifier;
	SCD_Struct_HD7 _has;

}

@property (nonatomic,readonly) BOOL hasExperimentIdentifier; 
@property (nonatomic,retain) NSString * experimentIdentifier;              //@synthesize experimentIdentifier=_experimentIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasTestCondition; 
@property (assign,nonatomic) long long testCondition;                      //@synthesize testCondition=_testCondition - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)experimentIdentifier;
-(void)setExperimentIdentifier:(NSString *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasExperimentIdentifier;
-(void)setTestCondition:(long long)arg1 ;
-(void)setHasTestCondition:(BOOL)arg1 ;
-(BOOL)hasTestCondition;
-(long long)testCondition;
@end

