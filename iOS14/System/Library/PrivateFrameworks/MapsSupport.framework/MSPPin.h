/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MSPDroppedPin;

@interface MSPPin : PBCodable <NSCopying> {

	MSPDroppedPin* _droppedPin;

}

@property (nonatomic,readonly) BOOL hasDroppedPin; 
@property (nonatomic,retain) MSPDroppedPin * droppedPin;              //@synthesize droppedPin=_droppedPin - In the implementation block
-(id)dictionaryRepresentation;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setDroppedPin:(MSPDroppedPin *)arg1 ;
-(BOOL)hasDroppedPin;
-(MSPDroppedPin *)droppedPin;
@end

