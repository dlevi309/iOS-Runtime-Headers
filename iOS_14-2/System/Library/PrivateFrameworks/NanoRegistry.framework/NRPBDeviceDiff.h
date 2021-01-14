/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NRPBDeviceDiff : PBCodable <NSCopying> {

	NSMutableArray* _diffs;
	NSMutableArray* _names;

}

@property (nonatomic,retain) NSMutableArray * names;              //@synthesize names=_names - In the implementation block
@property (nonatomic,retain) NSMutableArray * diffs;              //@synthesize diffs=_diffs - In the implementation block
+(Class)diffsType;
+(Class)namesType;
-(id)dictionaryRepresentation;
-(NSMutableArray *)diffs;
-(void)addDiffs:(id)arg1 ;
-(unsigned long long)diffsCount;
-(id)diffsAtIndex:(unsigned long long)arg1 ;
-(void)setDiffs:(NSMutableArray *)arg1 ;
-(void)addNames:(id)arg1 ;
-(id)namesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)namesCount;
-(void)mergeFrom:(id)arg1 ;
-(void)clearDiffs;
-(id)description;
-(NSMutableArray *)names;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setNames:(NSMutableArray *)arg1 ;
-(void)clearNames;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

