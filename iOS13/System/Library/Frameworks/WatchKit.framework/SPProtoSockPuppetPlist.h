/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addObject:(id)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)objects;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setObjects:(NSMutableArray *)arg1 ;
-(unsigned long long)objectsCount;
-(void)clearObjects;
@end

