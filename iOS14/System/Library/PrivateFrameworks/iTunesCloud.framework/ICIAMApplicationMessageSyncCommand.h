/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ICIAMApplicationMessage;

@interface ICIAMApplicationMessageSyncCommand : PBCodable <NSCopying> {

	long long _commandSerialNumber;
	ICIAMApplicationMessage* _applicationMessage;
	int _commandType;
	SCD_Struct_IC4 _has;

}

@property (assign,nonatomic) BOOL hasCommandType; 
@property (assign,nonatomic) int commandType;                                           //@synthesize commandType=_commandType - In the implementation block
@property (nonatomic,readonly) BOOL hasApplicationMessage; 
@property (nonatomic,retain) ICIAMApplicationMessage * applicationMessage;              //@synthesize applicationMessage=_applicationMessage - In the implementation block
@property (assign,nonatomic) BOOL hasCommandSerialNumber; 
@property (assign,nonatomic) long long commandSerialNumber;                             //@synthesize commandSerialNumber=_commandSerialNumber - In the implementation block
-(id)dictionaryRepresentation;
-(long long)commandSerialNumber;
-(ICIAMApplicationMessage *)applicationMessage;
-(void)mergeFrom:(id)arg1 ;
-(void)setApplicationMessage:(ICIAMApplicationMessage *)arg1 ;
-(void)setCommandType:(int)arg1 ;
-(void)setHasCommandType:(BOOL)arg1 ;
-(BOOL)hasCommandType;
-(id)commandTypeAsString:(int)arg1 ;
-(int)StringAsCommandType:(id)arg1 ;
-(BOOL)hasApplicationMessage;
-(void)setCommandSerialNumber:(long long)arg1 ;
-(void)setHasCommandSerialNumber:(BOOL)arg1 ;
-(BOOL)hasCommandSerialNumber;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)commandType;
-(BOOL)isEqual:(id)arg1 ;
@end

