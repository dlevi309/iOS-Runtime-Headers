/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CLPBundleId : PBCodable <NSCopying> {

	double _timestamp;
	NSString* _fullName;
	NSString* _shortKey;
	SCD_Struct_CL3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasShortKey; 
@property (nonatomic,retain) NSString * shortKey;              //@synthesize shortKey=_shortKey - In the implementation block
@property (nonatomic,readonly) BOOL hasFullName; 
@property (nonatomic,retain) NSString * fullName;              //@synthesize fullName=_fullName - In the implementation block
-(id)dictionaryRepresentation;
-(void)setFullName:(NSString *)arg1 ;
-(NSString *)fullName;
-(void)setShortKey:(NSString *)arg1 ;
-(double)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(NSString *)shortKey;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasFullName;
-(BOOL)hasShortKey;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

