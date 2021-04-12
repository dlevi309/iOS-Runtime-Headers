/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface _DKPRMetadata : PBCodable <NSCopying> {

	NSMutableArray* _entrys;

}

@property (nonatomic,retain) NSMutableArray * entrys;              //@synthesize entrys=_entrys - In the implementation block
+(Class)entryType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addEntry:(id)arg1 ;
-(NSMutableArray *)entrys;
-(unsigned long long)entrysCount;
-(void)clearEntrys;
-(id)entryAtIndex:(unsigned long long)arg1 ;
-(void)setEntrys:(NSMutableArray *)arg1 ;
@end

