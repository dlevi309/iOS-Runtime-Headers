/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDHomeKitMultiUserSettings : PBCodable <NSCopying> {

	NSMutableArray* _homeKitMultiUserSettingsValuesByKeyPaths;
	BOOL _isOwner;
	SCD_Struct_AW7 _has;

}

@property (assign,nonatomic) BOOL hasIsOwner; 
@property (assign,nonatomic) BOOL isOwner;                                                           //@synthesize isOwner=_isOwner - In the implementation block
@property (nonatomic,retain) NSMutableArray * homeKitMultiUserSettingsValuesByKeyPaths;              //@synthesize homeKitMultiUserSettingsValuesByKeyPaths=_homeKitMultiUserSettingsValuesByKeyPaths - In the implementation block
+(Class)homeKitMultiUserSettingsValuesByKeyPathType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isOwner;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIsOwner:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasIsOwner:(BOOL)arg1 ;
-(BOOL)hasIsOwner;
-(void)setHomeKitMultiUserSettingsValuesByKeyPaths:(NSMutableArray *)arg1 ;
-(NSMutableArray *)homeKitMultiUserSettingsValuesByKeyPaths;
-(void)addHomeKitMultiUserSettingsValuesByKeyPath:(id)arg1 ;
-(unsigned long long)homeKitMultiUserSettingsValuesByKeyPathsCount;
-(void)clearHomeKitMultiUserSettingsValuesByKeyPaths;
-(id)homeKitMultiUserSettingsValuesByKeyPathAtIndex:(unsigned long long)arg1 ;
@end

