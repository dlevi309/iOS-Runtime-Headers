/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface _MRVideoThumbnailProtobuf : PBCodable <NSCopying> {

	double _time;
	NSData* _imageData;
	SCD_Struct_MR4 _has;

}

@property (nonatomic,readonly) BOOL hasImageData; 
@property (nonatomic,retain) NSData * imageData;               //@synthesize imageData=_imageData - In the implementation block
@property (assign,nonatomic) BOOL hasTime; 
@property (assign,nonatomic) double time;                      //@synthesize time=_time - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(double)time;
-(void)writeTo:(id)arg1 ;
-(void)setTime:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSData *)imageData;
-(void)setHasTime:(BOOL)arg1 ;
-(BOOL)hasTime;
-(void)setImageData:(NSData *)arg1 ;
-(BOOL)hasImageData;
@end

