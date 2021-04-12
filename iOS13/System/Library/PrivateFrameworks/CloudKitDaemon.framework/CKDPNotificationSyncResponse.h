/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSMutableArray;

@interface CKDPNotificationSyncResponse : PBCodable <NSCopying> {

	NSData* _changeID;
	NSMutableArray* _pushMessages;
	BOOL _moreAvailable;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasChangeID; 
@property (nonatomic,retain) NSData * changeID;                          //@synthesize changeID=_changeID - In the implementation block
@property (nonatomic,retain) NSMutableArray * pushMessages;              //@synthesize pushMessages=_pushMessages - In the implementation block
@property (assign,nonatomic) BOOL hasMoreAvailable; 
@property (assign,nonatomic) BOOL moreAvailable;                         //@synthesize moreAvailable=_moreAvailable - In the implementation block
+(Class)pushMessageType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSData *)changeID;
-(void)setChangeID:(NSData *)arg1 ;
-(BOOL)moreAvailable;
-(void)addPushMessage:(id)arg1 ;
-(unsigned long long)pushMessagesCount;
-(void)clearPushMessages;
-(id)pushMessageAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasChangeID;
-(void)setMoreAvailable:(BOOL)arg1 ;
-(void)setHasMoreAvailable:(BOOL)arg1 ;
-(BOOL)hasMoreAvailable;
-(NSMutableArray *)pushMessages;
-(void)setPushMessages:(NSMutableArray *)arg1 ;
@end

