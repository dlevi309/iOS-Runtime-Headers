/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
*/

#import <NanoMediaRemote/NanoMediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, _NMRContentItemMetadata;

@interface _NMRContentItem : PBCodable <NSCopying> {

	NSString* _identifier;
	_NMRContentItemMetadata* _metadata;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasMetadata; 
@property (nonatomic,retain) _NMRContentItemMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasIdentifier;
-(BOOL)hasMetadata;
-(void)mergeFrom:(id)arg1 ;
-(void)setMetadata:(_NMRContentItemMetadata *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(_NMRContentItemMetadata *)metadata;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

