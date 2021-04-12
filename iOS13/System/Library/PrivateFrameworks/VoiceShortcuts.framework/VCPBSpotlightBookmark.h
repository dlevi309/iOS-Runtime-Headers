/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/

#import <VoiceShortcuts/VoiceShortcuts-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface VCPBSpotlightBookmark : PBCodable <NSCopying> {

	unsigned long long _identifier;
	NSMutableArray* _pairs;

}

@property (assign,nonatomic) unsigned long long identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * pairs;                     //@synthesize pairs=_pairs - In the implementation block
+(Class)pairsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)identifier;
-(void)setIdentifier:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)pairs;
-(void)setPairs:(NSMutableArray *)arg1 ;
-(unsigned long long)pairsCount;
-(void)clearPairs;
-(void)addPairs:(id)arg1 ;
-(id)pairsAtIndex:(unsigned long long)arg1 ;
@end

