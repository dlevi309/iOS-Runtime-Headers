/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(double)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(double)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)fullName;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setFullName:(NSString *)arg1 ;
-(BOOL)hasFullName;
-(void)setShortKey:(NSString *)arg1 ;
-(BOOL)hasShortKey;
-(NSString *)shortKey;
@end

