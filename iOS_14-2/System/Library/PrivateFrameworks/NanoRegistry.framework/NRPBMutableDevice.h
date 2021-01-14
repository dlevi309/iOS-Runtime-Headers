/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(Class)namesType;
+(Class)propertiesType;
-(id)dictionaryRepresentation;
-(NSMutableArray *)properties;
-(void)addNames:(id)arg1 ;
-(id)namesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)namesCount;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)propertiesCount;
-(void)clearProperties;
-(void)addProperties:(id)arg1 ;
-(id)description;
-(id)propertiesAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)names;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setProperties:(NSMutableArray *)arg1 ;
-(void)setNames:(NSMutableArray *)arg1 ;
-(void)clearNames;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

