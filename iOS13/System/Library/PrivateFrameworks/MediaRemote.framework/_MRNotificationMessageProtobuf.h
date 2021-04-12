/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface _MRNotificationMessageProtobuf : PBCodable <NSCopying> {

	NSMutableArray* _notifications;
	NSMutableArray* _playerPaths;
	NSMutableArray* _userInfos;

}

@property (nonatomic,retain) NSMutableArray * notifications;              //@synthesize notifications=_notifications - In the implementation block
@property (nonatomic,retain) NSMutableArray * userInfos;                  //@synthesize userInfos=_userInfos - In the implementation block
@property (nonatomic,retain) NSMutableArray * playerPaths;                //@synthesize playerPaths=_playerPaths - In the implementation block
+(Class)notificationType;
+(Class)userInfoType;
+(Class)playerPathType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)notifications;
-(void)setNotifications:(NSMutableArray *)arg1 ;
-(void)addUserInfo:(id)arg1 ;
-(NSMutableArray *)userInfos;
-(id)userInfoAtIndex:(unsigned long long)arg1 ;
-(void)setUserInfos:(NSMutableArray *)arg1 ;
-(void)addNotification:(id)arg1 ;
-(void)addPlayerPath:(id)arg1 ;
-(unsigned long long)notificationsCount;
-(void)clearNotifications;
-(id)notificationAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)userInfosCount;
-(void)clearUserInfos;
-(unsigned long long)playerPathsCount;
-(void)clearPlayerPaths;
-(id)playerPathAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)playerPaths;
-(void)setPlayerPaths:(NSMutableArray *)arg1 ;
@end

