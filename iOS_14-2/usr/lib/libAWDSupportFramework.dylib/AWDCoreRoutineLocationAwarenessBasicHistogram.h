/*
* Generated on Thursday, January 14, 2021 at 2:28:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDCoreRoutineLocationAwarenessBasicHistogram : PBCodable <NSCopying> {

	SCD_Struct_AW15* _counts;

}

@property (nonatomic,readonly) unsigned long long countsCount; 
@property (nonatomic,readonly) int* counts; 
-(id)dictionaryRepresentation;
-(unsigned long long)countsCount;
-(int*)counts;
-(void)mergeFrom:(id)arg1 ;
-(void)clearCounts;
-(void)setCounts:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(int)countAtIndex:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addCount:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

