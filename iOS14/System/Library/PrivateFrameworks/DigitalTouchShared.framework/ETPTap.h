/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
*/

#import <DigitalTouchShared/DigitalTouchShared-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface ETPTap : PBCodable <NSCopying> {

	NSData* _colors;
	NSData* _points;
	NSData* _timeDeltas;

}

@property (nonatomic,readonly) BOOL hasTimeDeltas; 
@property (nonatomic,retain) NSData * timeDeltas;               //@synthesize timeDeltas=_timeDeltas - In the implementation block
@property (nonatomic,readonly) BOOL hasPoints; 
@property (nonatomic,retain) NSData * points;                   //@synthesize points=_points - In the implementation block
@property (nonatomic,readonly) BOOL hasColors; 
@property (nonatomic,retain) NSData * colors;                   //@synthesize colors=_colors - In the implementation block
-(NSData *)colors;
-(void)setColors:(NSData *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setPoints:(NSData *)arg1 ;
-(BOOL)hasColors;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)points;
-(BOOL)isEqual:(id)arg1 ;
-(void)setTimeDeltas:(NSData *)arg1 ;
-(BOOL)hasTimeDeltas;
-(BOOL)hasPoints;
-(NSData *)timeDeltas;
@end

