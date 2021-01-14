/*
* Generated on Thursday, January 14, 2021 at 2:28:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDITesterTestStart : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _testName;
	NSString* _uniqueKey;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasTestName; 
@property (nonatomic,retain) NSString * testName;                       //@synthesize testName=_testName - In the implementation block
@property (nonatomic,readonly) BOOL hasUniqueKey; 
@property (nonatomic,retain) NSString * uniqueKey;                      //@synthesize uniqueKey=_uniqueKey - In the implementation block
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
-(BOOL)hasTestName;
-(BOOL)hasUniqueKey;
@end

