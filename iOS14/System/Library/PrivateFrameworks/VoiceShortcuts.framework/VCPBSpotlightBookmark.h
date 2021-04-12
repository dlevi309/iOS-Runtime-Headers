/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSMutableArray *)pairs;
-(id)dictionaryRepresentation;
-(void)setPairs:(NSMutableArray *)arg1 ;
-(unsigned long long)pairsCount;
-(void)clearPairs;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIdentifier:(unsigned long long)arg1 ;
-(unsigned long long)identifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addPairs:(id)arg1 ;
-(id)pairsAtIndex:(unsigned long long)arg1 ;
@end

