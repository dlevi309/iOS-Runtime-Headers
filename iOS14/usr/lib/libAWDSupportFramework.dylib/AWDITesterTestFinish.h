/*
* Generated on Thursday, January 14, 2021 at 2:28:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDITesterTestFinish : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _testName;
	unsigned _testStatus;
	NSString* _uniqueKey;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasTestName; 
@property (nonatomic,retain) NSString * testName;                       //@synthesize testName=_testName - In the implementation block
@property (nonatomic,readonly) BOOL hasUniqueKey; 
@property (nonatomic,retain) NSString * uniqueKey;                      //@synthesize uniqueKey=_uniqueKey - In the implementation block
@property (assign,nonatomic) BOOL hasTestStatus; 
@property (assign,nonatomic) unsigned testStatus;                       //@synthesize testStatus=_testStatus - In the implementation block
-(NSString *)uniqueKey;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setTestName:(NSString *)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)setUniqueKey:(NSString *)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)testName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setTestStatus:(unsigned)arg1 ;
-(BOOL)hasTestName;
-(BOOL)hasTestStatus;
-(unsigned)testStatus;
-(void)setHasTestStatus:(BOOL)arg1 ;
-(BOOL)hasUniqueKey;
@end

