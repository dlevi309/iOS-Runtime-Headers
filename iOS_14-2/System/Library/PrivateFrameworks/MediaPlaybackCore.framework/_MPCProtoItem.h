/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MPCProtoItemIdentifierSet;

@interface _MPCProtoItem : PBCodable <NSCopying> {

	_MPCProtoItemIdentifierSet* _identifierSet;
	int _mediaType;
	BOOL _excludeFromShuffle;
	SCD_Struct_MP23 _has;

}

@property (assign,nonatomic) BOOL hasMediaType; 
@property (assign,nonatomic) int mediaType;                                           //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifierSet; 
@property (nonatomic,retain) _MPCProtoItemIdentifierSet * identifierSet;              //@synthesize identifierSet=_identifierSet - In the implementation block
@property (assign,nonatomic) BOOL hasExcludeFromShuffle; 
@property (assign,nonatomic) BOOL excludeFromShuffle;                                 //@synthesize excludeFromShuffle=_excludeFromShuffle - In the implementation block
-(id)dictionaryRepresentation;
-(void)setMediaType:(int)arg1 ;
-(int)mediaType;
-(void)setHasMediaType:(BOOL)arg1 ;
-(BOOL)hasMediaType;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setExcludeFromShuffle:(BOOL)arg1 ;
-(void)setHasExcludeFromShuffle:(BOOL)arg1 ;
-(BOOL)hasExcludeFromShuffle;
-(BOOL)excludeFromShuffle;
-(_MPCProtoItemIdentifierSet *)identifierSet;
-(void)setIdentifierSet:(_MPCProtoItemIdentifierSet *)arg1 ;
-(BOOL)hasIdentifierSet;
@end

