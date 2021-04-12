/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HomeKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray, NSData;

@interface HMPBActionSet : PBCodable <NSCopying> {

	NSString* _actionSetType;
	NSMutableArray* _actions;
	NSData* _homeUUID;
	NSString* _name;
	NSData* _uuid;

}

@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSMutableArray * actions;              //@synthesize actions=_actions - In the implementation block
@property (nonatomic,readonly) BOOL hasActionSetType; 
@property (nonatomic,retain) NSString * actionSetType;              //@synthesize actionSetType=_actionSetType - In the implementation block
@property (nonatomic,readonly) BOOL hasUuid; 
@property (nonatomic,retain) NSData * uuid;                         //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) BOOL hasHomeUUID; 
@property (nonatomic,retain) NSData * homeUUID;                     //@synthesize homeUUID=_homeUUID - In the implementation block
+(Class)actionsType;
-(void)setActions:(NSMutableArray *)arg1 ;
-(id)dictionaryRepresentation;
-(NSData *)homeUUID;
-(NSData *)uuid;
-(BOOL)hasName;
-(NSMutableArray *)actions;
-(BOOL)hasUuid;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)name;
-(NSString *)actionSetType;
-(id)description;
-(unsigned long long)actionsCount;
-(void)clearActions;
-(id)actionsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHomeUUID:(NSData *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setUuid:(NSData *)arg1 ;
-(void)addActions:(id)arg1 ;
-(void)setActionSetType:(NSString *)arg1 ;
-(BOOL)hasActionSetType;
-(BOOL)hasHomeUUID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

