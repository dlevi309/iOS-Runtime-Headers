/*
* Generated on Thursday, January 14, 2021 at 2:28:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDITesterCertHomeKitTestSubmission : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _accessoryManufacturer;
	NSString* _accessoryName;
	NSString* _testName;
	NSString* _testUUID;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                  //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasAccessoryManufacturer; 
@property (nonatomic,retain) NSString * accessoryManufacturer;              //@synthesize accessoryManufacturer=_accessoryManufacturer - In the implementation block
@property (nonatomic,readonly) BOOL hasAccessoryName; 
@property (nonatomic,retain) NSString * accessoryName;                      //@synthesize accessoryName=_accessoryName - In the implementation block
@property (nonatomic,readonly) BOOL hasTestUUID; 
@property (nonatomic,retain) NSString * testUUID;                           //@synthesize testUUID=_testUUID - In the implementation block
@property (nonatomic,readonly) BOOL hasTestName; 
@property (nonatomic,retain) NSString * testName;                           //@synthesize testName=_testName - In the implementation block
-(NSString *)accessoryName;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setTestName:(NSString *)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)testName;
-(void)setAccessoryName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setAccessoryManufacturer:(NSString *)arg1 ;
-(NSString *)accessoryManufacturer;
-(void)setTestUUID:(NSString *)arg1 ;
-(BOOL)hasTestUUID;
-(BOOL)hasTestName;
-(NSString *)testUUID;
-(BOOL)hasAccessoryName;
-(BOOL)hasAccessoryManufacturer;
@end

