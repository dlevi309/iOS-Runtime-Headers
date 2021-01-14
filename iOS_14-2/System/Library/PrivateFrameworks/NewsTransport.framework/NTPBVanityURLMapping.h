/*
* Generated on Thursday, January 14, 2021 at 2:23:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NTPBVanityURLMapping : PBCodable <NSCopying> {

	NSMutableArray* _paths;

}

@property (nonatomic,retain) NSMutableArray * paths;              //@synthesize paths=_paths - In the implementation block
+(Class)pathsType;
-(id)dictionaryRepresentation;
-(NSMutableArray *)paths;
-(void)setPaths:(NSMutableArray *)arg1 ;
-(unsigned long long)pathsCount;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)addPaths:(id)arg1 ;
-(unsigned long long)hash;
-(void)clearPaths;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)pathsAtIndex:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

