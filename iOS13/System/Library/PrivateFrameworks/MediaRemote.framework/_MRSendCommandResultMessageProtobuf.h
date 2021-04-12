/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray, _MRNowPlayingPlayerPathProtobuf;

@interface _MRSendCommandResultMessageProtobuf : PBCodable <NSCopying> {

	SCD_Struct_MR8* _handlerReturnStatus;
	NSString* _commandID;
	NSMutableArray* _handlerReturnStatusDatas;
	_MRNowPlayingPlayerPathProtobuf* _playerPath;
	int _sendError;
	SCD_Struct_MR4 _has;

}

@property (assign,nonatomic) BOOL hasSendError; 
@property (assign,nonatomic) int sendError;                                              //@synthesize sendError=_sendError - In the implementation block
@property (nonatomic,readonly) unsigned long long handlerReturnStatusCount; 
@property (nonatomic,readonly) int* handlerReturnStatus; 
@property (nonatomic,retain) NSMutableArray * handlerReturnStatusDatas;                  //@synthesize handlerReturnStatusDatas=_handlerReturnStatusDatas - In the implementation block
@property (nonatomic,readonly) BOOL hasCommandID; 
@property (nonatomic,retain) NSString * commandID;                                       //@synthesize commandID=_commandID - In the implementation block
@property (nonatomic,readonly) BOOL hasPlayerPath; 
@property (nonatomic,retain) _MRNowPlayingPlayerPathProtobuf * playerPath;               //@synthesize playerPath=_playerPath - In the implementation block
+(Class)handlerReturnStatusDataType;
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
-(NSString *)commandID;
-(_MRNowPlayingPlayerPathProtobuf *)playerPath;
-(void)setPlayerPath:(_MRNowPlayingPlayerPathProtobuf *)arg1 ;
-(BOOL)hasPlayerPath;
-(void)addHandlerReturnStatusData:(id)arg1 ;
-(unsigned long long)handlerReturnStatusCount;
-(void)clearHandlerReturnStatus;
-(int)handlerReturnStatusAtIndex:(unsigned long long)arg1 ;
-(void)addHandlerReturnStatus:(int)arg1 ;
-(unsigned long long)handlerReturnStatusDatasCount;
-(void)clearHandlerReturnStatusDatas;
-(id)handlerReturnStatusDataAtIndex:(unsigned long long)arg1 ;
-(void)setCommandID:(NSString *)arg1 ;
-(int)sendError;
-(void)setSendError:(int)arg1 ;
-(void)setHasSendError:(BOOL)arg1 ;
-(BOOL)hasSendError;
-(id)sendErrorAsString:(int)arg1 ;
-(int)StringAsSendError:(id)arg1 ;
-(int*)handlerReturnStatus;
-(void)setHandlerReturnStatus:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)handlerReturnStatusAsString:(int)arg1 ;
-(int)StringAsHandlerReturnStatus:(id)arg1 ;
-(BOOL)hasCommandID;
-(NSMutableArray *)handlerReturnStatusDatas;
-(void)setHandlerReturnStatusDatas:(NSMutableArray *)arg1 ;
@end

