/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOComponentAction : PBCodable <NSCopying> {

	SCD_Struct_GE90* _actions;
	int _component;
	BOOL _handleLocally;
	SCD_Struct_GE123 _flags;

}

@property (assign,nonatomic) BOOL hasComponent; 
@property (assign,nonatomic) int component; 
@property (nonatomic,readonly) unsigned long long actionsCount; 
@property (nonatomic,readonly) int* actions; 
@property (assign,nonatomic) BOOL hasHandleLocally; 
@property (assign,nonatomic) BOOL handleLocally; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(int*)actions;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(int)component;
-(unsigned long long)actionsCount;
-(void)setComponent:(int)arg1 ;
-(void)setHandleLocally:(BOOL)arg1 ;
-(void)clearActions;
-(int)actionsAtIndex:(unsigned long long)arg1 ;
-(void)setHasComponent:(BOOL)arg1 ;
-(BOOL)hasComponent;
-(BOOL)handleLocally;
-(id)componentAsString:(int)arg1 ;
-(int)StringAsComponent:(id)arg1 ;
-(void)setActions:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)actionsAsString:(int)arg1 ;
-(int)StringAsActions:(id)arg1 ;
-(void)setHasHandleLocally:(BOOL)arg1 ;
-(BOOL)hasHandleLocally;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addActions:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

