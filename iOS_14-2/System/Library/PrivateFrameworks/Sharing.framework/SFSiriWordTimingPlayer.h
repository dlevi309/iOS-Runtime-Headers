/*
* Generated on Thursday, January 14, 2021 at 2:22:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, SFSiriWordTimingInfo, NSString, NSArray;

@interface SFSiriWordTimingPlayer : NSObject {

	NSObject*<OS_dispatch_source> _timer;
	unsigned long long _wordIndex;
	SFSiriWordTimingInfo* _wordInfo;
	unsigned _flags;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	double _startTime;
	NSString* _text;
	/*^block*/id _wordHandler;
	NSArray* _wordTimings;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) unsigned flags;                                          //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) double startTime;                                        //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,copy) NSString * text;                                           //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) id wordHandler;                                            //@synthesize wordHandler=_wordHandler - In the implementation block
@property (nonatomic,copy) NSArray * wordTimings;                                     //@synthesize wordTimings=_wordTimings - In the implementation block
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned)flags;
-(void)setStartTime:(double)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)_processNextWord;
-(void)activate;
-(void)_processWord;
-(id)wordHandler;
-(NSArray *)wordTimings;
-(NSString *)text;
-(void)setFlags:(unsigned)arg1 ;
-(void)invalidate;
-(void)setWordTimings:(NSArray *)arg1 ;
-(void)setWordHandler:(id)arg1 ;
-(double)startTime;
@end

