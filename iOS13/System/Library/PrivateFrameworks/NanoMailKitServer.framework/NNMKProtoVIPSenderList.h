/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addVips:(id)arg1 ;
-(NSMutableArray *)vips;
-(id)vipList;
-(unsigned long long)vipsCount;
-(void)clearVips;
-(id)vipsAtIndex:(unsigned long long)arg1 ;
-(void)setVips:(NSMutableArray *)arg1 ;
@end

