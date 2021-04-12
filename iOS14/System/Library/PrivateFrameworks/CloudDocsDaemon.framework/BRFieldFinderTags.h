/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface BRFieldFinderTags : PBCodable <NSCopying> {

	NSMutableArray* _tags;

}

@property (nonatomic,retain) NSMutableArray * tags;              //@synthesize tags=_tags - In the implementation block
+(Class)tagsType;
-(id)dictionaryRepresentation;
-(NSMutableArray *)tags;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setTags:(NSMutableArray *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)tagsCount;
-(void)addTags:(id)arg1 ;
-(void)clearTags;
-(id)tagsAtIndex:(unsigned long long)arg1 ;
@end

