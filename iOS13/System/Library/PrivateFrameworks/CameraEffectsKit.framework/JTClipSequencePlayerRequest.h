/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@class NSString, JTClipSequencePlayer;

@interface JTClipSequencePlayerRequest : NSObject {

	NSString* _uniqueID;
	/*^block*/id _block;
	double _queuedTime;
	double _startTime;
	unsigned long long _type;
	/*^block*/id _completionBlock;
	JTClipSequencePlayer* _player;

}

@property (nonatomic,readonly) NSString * uniqueID;                //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,copy) id block;                               //@synthesize block=_block - In the implementation block
@property (assign,nonatomic) double queuedTime;                    //@synthesize queuedTime=_queuedTime - In the implementation block
@property (assign,nonatomic) double startTime;                     //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) id completionBlock;                     //@synthesize completionBlock=_completionBlock - In the implementation block
@property (__weak) JTClipSequencePlayer * player;                  //@synthesize player=_player - In the implementation block
+(id)stringFromRequestType:(unsigned long long)arg1 ;
-(id)description;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(id)block;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(NSString *)uniqueID;
-(void)setBlock:(id)arg1 ;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(void)setQueuedTime:(double)arg1 ;
-(double)queuedTime;
-(JTClipSequencePlayer *)player;
-(void)setPlayer:(JTClipSequencePlayer *)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ofType:(unsigned long long)arg2 ;
@end

