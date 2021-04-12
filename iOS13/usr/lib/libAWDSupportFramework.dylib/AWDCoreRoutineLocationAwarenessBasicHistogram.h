/*
* Generated on Monday, March 1, 2021 at 2:35:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDCoreRoutineLocationAwarenessBasicHistogram : PBCodable <NSCopying> {

	SCD_Struct_AW16* _counts;

}

@property (nonatomic,readonly) unsigned long long countsCount; 
@property (nonatomic,readonly) int* counts; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int*)counts;
-(unsigned long long)countsCount;
-(void)clearCounts;
-(void)addCount:(int)arg1 ;
-(int)countAtIndex:(unsigned long long)arg1 ;
-(void)setCounts:(int*)arg1 count:(unsigned long long)arg2 ;
@end

