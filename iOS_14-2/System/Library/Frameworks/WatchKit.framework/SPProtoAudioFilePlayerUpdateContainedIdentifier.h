/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setContainedIdentifier:(NSString *)arg1 ;
-(BOOL)hasContainedIdentifier;
-(NSString *)containedIdentifier;
-(id)sockPuppetMessageForPlayerItemUpsertWithAsset;
-(id)sockPuppetMessageForQueuePlayerReplaceCurrentItem;
-(id)sockPuppetMessageForQueuePlayerAppendItem;
-(id)sockPuppetMessageForQueuePlayerRemoveItem;
-(id)sockPuppetMessageForQueuePlayerSetCurrentItem;
@end

