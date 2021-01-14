/*
* Generated on Thursday, January 14, 2021 at 2:23:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBScoredTagID : PBCodable <NSCopying> {

	float _score;
	NSString* _tagId;

}

@property (nonatomic,retain) NSString * tagId;              //@synthesize tagId=_tagId - In the implementation block
@property (assign,nonatomic) float score;                   //@synthesize score=_score - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)tagId;
-(float)score;
-(void)setScore:(float)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setTagId:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

