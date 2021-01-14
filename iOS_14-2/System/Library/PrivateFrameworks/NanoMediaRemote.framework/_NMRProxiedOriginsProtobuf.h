/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(NSMutableArray *)origins;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addOrigins:(id)arg1 ;
-(unsigned long long)originsCount;
-(void)clearOrigins;
-(id)originsAtIndex:(unsigned long long)arg1 ;
-(void)setOrigins:(NSMutableArray *)arg1 ;
@end

