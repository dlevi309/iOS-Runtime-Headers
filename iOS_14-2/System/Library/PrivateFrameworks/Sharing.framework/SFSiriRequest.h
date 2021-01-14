/*
* Generated on Thursday, January 14, 2021 at 2:22:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/


@class VSSpeechRequest;

@interface SFSiriRequest : NSObject {

	BOOL _synthesizing;
	unsigned _flags;
	double _delaySecs;
	id _owner;
	/*^block*/id _speechCompletion;
	VSSpeechRequest* _speechRequest;
	/*^block*/id _speechStartHandler;
	unsigned long long _startTicks;

}

@property (assign,nonatomic) double delaySecs;                             //@synthesize delaySecs=_delaySecs - In the implementation block
@property (assign,nonatomic) unsigned flags;                               //@synthesize flags=_flags - In the implementation block
@property (nonatomic,retain) id owner;                                     //@synthesize owner=_owner - In the implementation block
@property (nonatomic,copy) id speechCompletion;                            //@synthesize speechCompletion=_speechCompletion - In the implementation block
@property (nonatomic,retain) VSSpeechRequest * speechRequest;              //@synthesize speechRequest=_speechRequest - In the implementation block
@property (nonatomic,copy) id speechStartHandler;                          //@synthesize speechStartHandler=_speechStartHandler - In the implementation block
@property (assign,nonatomic) unsigned long long startTicks;                //@synthesize startTicks=_startTicks - In the implementation block
@property (assign,nonatomic) BOOL synthesizing;                            //@synthesize synthesizing=_synthesizing - In the implementation block
-(id)owner;
-(unsigned)flags;
-(void)setSpeechRequest:(VSSpeechRequest *)arg1 ;
-(unsigned long long)startTicks;
-(void)setStartTicks:(unsigned long long)arg1 ;
-(void)setDelaySecs:(double)arg1 ;
-(id)speechCompletion;
-(void)setSpeechCompletion:(id)arg1 ;
-(BOOL)synthesizing;
-(id)speechStartHandler;
-(void)setSpeechStartHandler:(id)arg1 ;
-(void)setSynthesizing:(BOOL)arg1 ;
-(VSSpeechRequest *)speechRequest;
-(void)setOwner:(id)arg1 ;
-(void)setFlags:(unsigned)arg1 ;
-(double)delaySecs;
@end

