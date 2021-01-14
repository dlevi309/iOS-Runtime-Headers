/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <Navigation/Navigation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface MNTraceBookmark : PBCodable <NSCopying> {

	double _timestamp;
	NSData* _imageData;
	SCD_Struct_MN18 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasImageData; 
@property (nonatomic,retain) NSData * imageData;               //@synthesize imageData=_imageData - In the implementation block
-(id)dictionaryRepresentation;
-(double)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(NSData *)imageData;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(void)setImageData:(NSData *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasImageData;
@end

