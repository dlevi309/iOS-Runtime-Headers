/*
* Generated on Monday, March 1, 2021 at 2:35:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDITesterCertTestSubmission : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _accessoryName;
	NSString* _accessoryType;
	NSString* _testName;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasTestName; 
@property (nonatomic,retain) NSString * testName;                       //@synthesize testName=_testName - In the implementation block
@property (nonatomic,readonly) BOOL hasAccessoryName; 
@property (nonatomic,retain) NSString * accessoryName;                  //@synthesize accessoryName=_accessoryName - In the implementation block
@property (nonatomic,readonly) BOOL hasAccessoryType; 
@property (nonatomic,retain) NSString * accessoryType;                  //@synthesize accessoryType=_accessoryType - In the implementation block
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
-(NSString *)accessoryName;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)accessoryType;
-(void)setAccessoryType:(NSString *)arg1 ;
-(NSString *)testName;
-(void)setTestName:(NSString *)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setAccessoryName:(NSString *)arg1 ;
-(BOOL)hasTestName;
-(BOOL)hasAccessoryName;
-(BOOL)hasAccessoryType;
@end

