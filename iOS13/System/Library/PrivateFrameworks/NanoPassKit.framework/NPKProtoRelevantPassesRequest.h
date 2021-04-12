/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addPassRelevancyTuples:(id)arg1 ;
-(unsigned long long)passRelevancyTuplesCount;
-(void)clearPassRelevancyTuples;
-(id)passRelevancyTuplesAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)passRelevancyTuples;
-(void)setPassRelevancyTuples:(NSMutableArray *)arg1 ;
@end

