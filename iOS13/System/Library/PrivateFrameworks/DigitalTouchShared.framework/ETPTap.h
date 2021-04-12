/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSData *)points;
-(void)setPoints:(NSData *)arg1 ;
-(void)setColors:(NSData *)arg1 ;
-(NSData *)colors;
-(BOOL)hasColors;
-(void)setTimeDeltas:(NSData *)arg1 ;
-(BOOL)hasTimeDeltas;
-(BOOL)hasPoints;
-(NSData *)timeDeltas;
@end

