/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NPKProtoRelevantPassesRequest : PBRequest <NSCopying> {

	NSMutableArray* _passRelevancyTuples;

}

@property (nonatomic,retain) NSMutableArray * passRelevancyTuples;              //@synthesize passRelevancyTuples=_passRelevancyTuples - In the implementation block
+(Class)passRelevancyTuplesType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addPassRelevancyTuples:(id)arg1 ;
-(unsigned long long)passRelevancyTuplesCount;
-(void)clearPassRelevancyTuples;
-(id)passRelevancyTuplesAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)passRelevancyTuples;
-(void)setPassRelevancyTuples:(NSMutableArray *)arg1 ;
@end

