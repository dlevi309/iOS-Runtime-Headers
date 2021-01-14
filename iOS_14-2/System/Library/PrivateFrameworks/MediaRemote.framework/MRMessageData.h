/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@class NSData, MRProtocolMessage;

@interface MRMessageData : NSObject {

	NSData* _data;
	MRProtocolMessage* _message;
	/*^block*/id _dataBlock;
	long long _readPosition;

}

@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) MRProtocolMessage * message; 
@property (assign,nonatomic) long long readPosition;                         //@synthesize readPosition=_readPosition - In the implementation block
@property (getter=isFinished,nonatomic,readonly) BOOL finished; 
@property (nonatomic,readonly) BOOL canPurge; 
-(MRProtocolMessage *)message;
-(BOOL)isFinished;
-(NSData *)data;
-(BOOL)canPurge;
-(id)initWithMessage:(id)arg1 createDataBlock:(/*^block*/id)arg2 ;
-(long long)readPosition;
-(void)setReadPosition:(long long)arg1 ;
@end

