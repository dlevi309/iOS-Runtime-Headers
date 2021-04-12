/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface _DKPRCompressedChangeSet : PBCodable <NSCopying> {

	unsigned long long _uncompressedLength;
	NSData* _compressedData;

}

@property (assign,nonatomic) unsigned long long uncompressedLength;              //@synthesize uncompressedLength=_uncompressedLength - In the implementation block
@property (nonatomic,retain) NSData * compressedData;                            //@synthesize compressedData=_compressedData - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCompressedData:(NSData *)arg1 ;
-(unsigned long long)uncompressedLength;
-(void)setUncompressedLength:(unsigned long long)arg1 ;
-(NSData *)compressedData;
@end

