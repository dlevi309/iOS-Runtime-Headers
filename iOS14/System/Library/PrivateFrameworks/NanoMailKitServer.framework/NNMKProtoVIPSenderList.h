/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NNMKProtoVIPSenderList : PBCodable <NSCopying> {

	NSMutableArray* _vips;

}

@property (nonatomic,retain) NSMutableArray * vips;              //@synthesize vips=_vips - In the implementation block
+(id)protoVIPList:(id)arg1 ;
+(Class)vipsType;
-(id)dictionaryRepresentation;
-(NSMutableArray *)vips;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)vipList;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addVips:(id)arg1 ;
-(unsigned long long)vipsCount;
-(void)clearVips;
-(id)vipsAtIndex:(unsigned long long)arg1 ;
-(void)setVips:(NSMutableArray *)arg1 ;
@end

