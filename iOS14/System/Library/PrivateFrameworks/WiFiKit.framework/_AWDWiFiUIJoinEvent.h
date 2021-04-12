/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/

#import <WiFiKit/WiFiKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface _AWDWiFiUIJoinEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _error;
	NSString* _process;
	NSString* _section;
	NSMutableArray* _sectionCounts;
	unsigned _securityType;
	SCD_Struct_AW15 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasProcess; 
@property (nonatomic,retain) NSString * process;                          //@synthesize process=_process - In the implementation block
@property (assign,nonatomic) BOOL hasSecurityType; 
@property (assign,nonatomic) unsigned securityType;                       //@synthesize securityType=_securityType - In the implementation block
@property (assign,nonatomic) BOOL hasError; 
@property (assign,nonatomic) unsigned error;                              //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) BOOL hasSection; 
@property (nonatomic,retain) NSString * section;                          //@synthesize section=_section - In the implementation block
@property (nonatomic,retain) NSMutableArray * sectionCounts;              //@synthesize sectionCounts=_sectionCounts - In the implementation block
+(Class)sectionCountsType;
-(NSString *)process;
-(void)setProcess:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setSection:(NSString *)arg1 ;
-(BOOL)hasSecurityType;
-(unsigned)securityType;
-(void)setHasSecurityType:(BOOL)arg1 ;
-(unsigned long long)timestamp;
-(void)setSecurityType:(unsigned)arg1 ;
-(NSString *)section;
-(void)setHasError:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setError:(unsigned)arg1 ;
-(unsigned)error;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasError;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasProcess;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)hasSection;
-(BOOL)isEqual:(id)arg1 ;
-(NSMutableArray *)sectionCounts;
-(void)setSectionCounts:(NSMutableArray *)arg1 ;
-(void)addSectionCounts:(id)arg1 ;
-(unsigned long long)sectionCountsCount;
-(void)clearSectionCounts;
-(id)sectionCountsAtIndex:(unsigned long long)arg1 ;
@end

