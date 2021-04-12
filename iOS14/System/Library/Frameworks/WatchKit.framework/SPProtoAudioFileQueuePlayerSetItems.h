/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
*/

#import <WatchKit/WatchKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface SPProtoAudioFileQueuePlayerSetItems : PBCodable <NSCopying> {

	NSString* _identifier;
	NSMutableArray* _playerItemIdentifiers;

}

@property (nonatomic,retain) NSString * identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * playerItemIdentifiers;              //@synthesize playerItemIdentifiers=_playerItemIdentifiers - In the implementation block
+(Class)playerItemIdentifiersType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addPlayerItemIdentifiers:(id)arg1 ;
-(unsigned long long)playerItemIdentifiersCount;
-(void)clearPlayerItemIdentifiers;
-(id)playerItemIdentifiersAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)playerItemIdentifiers;
-(void)setPlayerItemIdentifiers:(NSMutableArray *)arg1 ;
-(id)sockPuppetMessage;
@end

