/*
* Generated on Thursday, January 14, 2021 at 2:28:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDCFNetworkCacheMetrics : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned long long _totalBytesWritten;
	NSString* _bundleID;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasTotalBytesWritten; 
@property (assign,nonatomic) unsigned long long totalBytesWritten;              //@synthesize totalBytesWritten=_totalBytesWritten - In the implementation block
@property (nonatomic,readonly) BOOL hasBundleID; 
@property (nonatomic,retain) NSString * bundleID;                               //@synthesize bundleID=_bundleID - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasBundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setTotalBytesWritten:(unsigned long long)arg1 ;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(NSString *)bundleID;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)totalBytesWritten;
-(void)setHasTotalBytesWritten:(BOOL)arg1 ;
-(BOOL)hasTotalBytesWritten;
@end

