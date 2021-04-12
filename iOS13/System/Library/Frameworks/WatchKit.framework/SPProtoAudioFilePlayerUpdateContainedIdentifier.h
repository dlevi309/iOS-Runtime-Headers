/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
*/

#import <WatchKit/WatchKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SPProtoAudioFilePlayerUpdateContainedIdentifier : PBCodable <NSCopying> {

	NSString* _containedIdentifier;
	NSString* _identifier;

}

@property (nonatomic,retain) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasContainedIdentifier; 
@property (nonatomic,retain) NSString * containedIdentifier;              //@synthesize containedIdentifier=_containedIdentifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setContainedIdentifier:(NSString *)arg1 ;
-(BOOL)hasContainedIdentifier;
-(NSString *)containedIdentifier;
-(id)sockPuppetMessageForPlayerItemUpsertWithAsset;
-(id)sockPuppetMessageForQueuePlayerReplaceCurrentItem;
-(id)sockPuppetMessageForQueuePlayerAppendItem;
-(id)sockPuppetMessageForQueuePlayerRemoveItem;
-(id)sockPuppetMessageForQueuePlayerSetCurrentItem;
@end

