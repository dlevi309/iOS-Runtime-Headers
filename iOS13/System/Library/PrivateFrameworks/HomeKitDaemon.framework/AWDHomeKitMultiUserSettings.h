/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDHomeKitMultiUserSettings : PBCodable <NSCopying> {

	NSMutableArray* _homeKitMultiUserSettingsValuesByKeyPaths;
	BOOL _isOwner;
	SCD_Struct_AW6 _has;

}

@property (assign,nonatomic) BOOL hasIsOwner; 
@property (assign,nonatomic) BOOL isOwner;                                                           //@synthesize isOwner=_isOwner - In the implementation block
@property (nonatomic,retain) NSMutableArray * homeKitMultiUserSettingsValuesByKeyPaths;              //@synthesize homeKitMultiUserSettingsValuesByKeyPaths=_homeKitMultiUserSettingsValuesByKeyPaths - In the implementation block
+(Class)homeKitMultiUserSettingsValuesByKeyPathType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isOwner;
-(void)setIsOwner:(BOOL)arg1 ;
-(void)setHomeKitMultiUserSettingsValuesByKeyPaths:(NSMutableArray *)arg1 ;
-(NSMutableArray *)homeKitMultiUserSettingsValuesByKeyPaths;
-(void)setHasIsOwner:(BOOL)arg1 ;
-(BOOL)hasIsOwner;
-(void)addHomeKitMultiUserSettingsValuesByKeyPath:(id)arg1 ;
-(unsigned long long)homeKitMultiUserSettingsValuesByKeyPathsCount;
-(void)clearHomeKitMultiUserSettingsValuesByKeyPaths;
-(id)homeKitMultiUserSettingsValuesByKeyPathAtIndex:(unsigned long long)arg1 ;
@end

