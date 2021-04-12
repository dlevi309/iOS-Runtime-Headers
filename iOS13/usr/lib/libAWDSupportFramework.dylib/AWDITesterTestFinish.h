/*
* Generated on Monday, March 1, 2021 at 2:35:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)testName;
-(void)setTestName:(NSString *)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(NSString *)uniqueKey;
-(void)setUniqueKey:(NSString *)arg1 ;
-(void)setTestStatus:(unsigned)arg1 ;
-(BOOL)hasTestName;
-(BOOL)hasTestStatus;
-(unsigned)testStatus;
-(void)setHasTestStatus:(BOOL)arg1 ;
-(BOOL)hasUniqueKey;
@end

