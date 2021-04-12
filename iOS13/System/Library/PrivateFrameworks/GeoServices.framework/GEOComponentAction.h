/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOComponentAction : PBCodable <NSCopying> {

	SCD_Struct_GE1* _actions;
	int _component;
	BOOL _handleLocally;
	SCD_Struct_GE33 _flags;

}

@property (assign,nonatomic) BOOL hasComponent; 
@property (assign,nonatomic) int component; 
@property (nonatomic,readonly) unsigned long long actionsCount; 
@property (nonatomic,readonly) int* actions; 
@property (assign,nonatomic) BOOL hasHandleLocally; 
@property (assign,nonatomic) BOOL handleLocally; 
+(BOOL)isValid:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int*)actions;
-(void)readAll:(BOOL)arg1 ;
-(int)component;
-(unsigned long long)actionsCount;
-(int)actionsAtIndex:(unsigned long long)arg1 ;
-(BOOL)handleLocally;
-(void)clearActions;
-(void)addActions:(int)arg1 ;
-(void)setComponent:(int)arg1 ;
-(void)setHasComponent:(BOOL)arg1 ;
-(BOOL)hasComponent;
-(id)componentAsString:(int)arg1 ;
-(int)StringAsComponent:(id)arg1 ;
-(void)setActions:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)actionsAsString:(int)arg1 ;
-(int)StringAsActions:(id)arg1 ;
-(void)setHandleLocally:(BOOL)arg1 ;
-(void)setHasHandleLocally:(BOOL)arg1 ;
-(BOOL)hasHandleLocally;
@end

