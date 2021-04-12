/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_IC3 _has;

}

@property (assign,nonatomic) BOOL hasCommandType; 
@property (assign,nonatomic) int commandType;                                           //@synthesize commandType=_commandType - In the implementation block
@property (nonatomic,readonly) BOOL hasApplicationMessage; 
@property (nonatomic,retain) ICIAMApplicationMessage * applicationMessage;              //@synthesize applicationMessage=_applicationMessage - In the implementation block
@property (assign,nonatomic) BOOL hasCommandSerialNumber; 
@property (assign,nonatomic) long long commandSerialNumber;                             //@synthesize commandSerialNumber=_commandSerialNumber - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)commandType;
-(long long)commandSerialNumber;
-(ICIAMApplicationMessage *)applicationMessage;
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
@end

