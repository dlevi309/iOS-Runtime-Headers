/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSData *)uuid;
-(void)setUuid:(NSData *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSData *)homeUUID;
-(NSString *)actionSetType;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasName;
-(NSMutableArray *)actions;
-(void)setActions:(NSMutableArray *)arg1 ;
-(BOOL)hasUuid;
-(unsigned long long)actionsCount;
-(id)actionsAtIndex:(unsigned long long)arg1 ;
-(void)clearActions;
-(void)addActions:(id)arg1 ;
-(void)setActionSetType:(NSString *)arg1 ;
-(void)setHomeUUID:(NSData *)arg1 ;
-(BOOL)hasActionSetType;
-(BOOL)hasHomeUUID;
@end

