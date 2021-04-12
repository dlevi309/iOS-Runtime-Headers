/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)tags;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTags:(NSMutableArray *)arg1 ;
-(unsigned long long)tagsCount;
-(void)addTags:(id)arg1 ;
-(void)clearTags;
-(id)tagsAtIndex:(unsigned long long)arg1 ;
@end

