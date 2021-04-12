/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NRPBMutableDevice : PBCodable <NSCopying> {

	NSMutableArray* _names;
	NSMutableArray* _properties;

}

@property (nonatomic,retain) NSMutableArray * names;                   //@synthesize names=_names - In the implementation block
@property (nonatomic,retain) NSMutableArray * properties;              //@synthesize properties=_properties - In the implementation block
+(Class)propertiesType;
+(Class)namesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(NSMutableArray *)properties;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setProperties:(NSMutableArray *)arg1 ;
-(void)addProperties:(id)arg1 ;
-(unsigned long long)propertiesCount;
-(void)clearProperties;
-(id)propertiesAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)names;
-(unsigned long long)namesCount;
-(void)clearNames;
-(void)setNames:(NSMutableArray *)arg1 ;
-(void)addNames:(id)arg1 ;
-(id)namesAtIndex:(unsigned long long)arg1 ;
@end

