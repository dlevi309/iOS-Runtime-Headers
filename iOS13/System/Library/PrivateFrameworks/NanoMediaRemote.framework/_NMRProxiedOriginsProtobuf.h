/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
*/

#import <NanoMediaRemote/NanoMediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface _NMRProxiedOriginsProtobuf : PBCodable <NSCopying> {

	NSMutableArray* _origins;

}

@property (nonatomic,retain) NSMutableArray * origins;              //@synthesize origins=_origins - In the implementation block
+(Class)originsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)origins;
-(void)addOrigins:(id)arg1 ;
-(unsigned long long)originsCount;
-(void)clearOrigins;
-(id)originsAtIndex:(unsigned long long)arg1 ;
-(void)setOrigins:(NSMutableArray *)arg1 ;
@end

