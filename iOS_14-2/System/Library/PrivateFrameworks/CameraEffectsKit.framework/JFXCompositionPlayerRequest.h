/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@class NSString, JFXCompositionPlayer;

@interface JFXCompositionPlayerRequest : NSObject {

	NSString* _uniqueID;
	/*^block*/id _block;
	double _queuedTime;
	double _startTime;
	unsigned long long _type;
	/*^block*/id _completionBlock;
	JFXCompositionPlayer* _player;
	unsigned long long _signPostID;

}

@property (nonatomic,readonly) NSString * uniqueID;                        //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,copy) id block;                                       //@synthesize block=_block - In the implementation block
@property (assign,nonatomic) double queuedTime;                            //@synthesize queuedTime=_queuedTime - In the implementation block
@property (assign,nonatomic) double startTime;                             //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) unsigned long long type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) id completionBlock;                             //@synthesize completionBlock=_completionBlock - In the implementation block
@property (__weak) JFXCompositionPlayer * player;                          //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) unsigned long long signPostID;              //@synthesize signPostID=_signPostID - In the implementation block
+(id)stringFromRequestType:(unsigned long long)arg1 ;
-(JFXCompositionPlayer *)player;
-(void)setPlayer:(JFXCompositionPlayer *)arg1 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(id)block;
-(NSString *)uniqueID;
-(void)didBegin;
-(void)didCancel;
-(void)setStartTime:(double)arg1 ;
-(void)setBlock:(id)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(id)description;
-(double)queuedTime;
-(unsigned long long)type;
-(void)setQueuedTime:(double)arg1 ;
-(double)startTime;
-(unsigned long long)signPostID;
-(id)initWithBlock:(/*^block*/id)arg1 ofType:(unsigned long long)arg2 ;
-(void)didEnqueue;
-(void)didComplete;
@end

