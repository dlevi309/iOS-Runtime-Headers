/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setExperimentIdentifier:(NSString *)arg1 ;
-(BOOL)hasExperimentIdentifier;
-(void)setTestCondition:(long long)arg1 ;
-(void)setHasTestCondition:(BOOL)arg1 ;
-(BOOL)hasTestCondition;
-(NSString *)experimentIdentifier;
-(long long)testCondition;
@end

