/*
* Generated on Thursday, January 14, 2021 at 2:23:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBWeightedTagID : PBCodable <NSCopying> {

	NSString* _tagId;
	float _weight;

}

@property (nonatomic,retain) NSString * tagId;              //@synthesize tagId=_tagId - In the implementation block
@property (assign,nonatomic) float weight;                  //@synthesize weight=_weight - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)tagId;
-(void)setWeight:(float)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(float)weight;
-(id)description;
-(void)setTagId:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

