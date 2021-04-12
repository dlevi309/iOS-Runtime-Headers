/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
*/

#import <WatchKit/WatchKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface SPProtoSockPuppetPlist : PBCodable <NSCopying> {

	NSMutableArray* _objects;

}

@property (nonatomic,retain) NSMutableArray * objects;              //@synthesize objects=_objects - In the implementation block
+(Class)objectType;
-(NSMutableArray *)objects;
-(id)dictionaryRepresentation;
-(void)setObjects:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)description;
-(void)addObject:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)objectsCount;
-(void)clearObjects;
@end

