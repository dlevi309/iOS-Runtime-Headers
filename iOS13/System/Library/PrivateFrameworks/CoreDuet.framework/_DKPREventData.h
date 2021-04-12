/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface _DKPREventData : PBCodable <NSCopying> {

	unsigned long long _uncompressedLength;
	NSData* _event;
	unsigned _version;
	SCD_Struct_DK5 _has;

}

@property (assign,nonatomic) unsigned version;                                   //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSData * event;                                     //@synthesize event=_event - In the implementation block
@property (assign,nonatomic) BOOL hasUncompressedLength; 
@property (assign,nonatomic) unsigned long long uncompressedLength;              //@synthesize uncompressedLength=_uncompressedLength - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)version;
-(id)dictionaryRepresentation;
-(void)setVersion:(unsigned)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSData *)event;
-(void)setEvent:(NSData *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned long long)uncompressedLength;
-(void)setUncompressedLength:(unsigned long long)arg1 ;
-(void)setHasUncompressedLength:(BOOL)arg1 ;
-(BOOL)hasUncompressedLength;
@end

