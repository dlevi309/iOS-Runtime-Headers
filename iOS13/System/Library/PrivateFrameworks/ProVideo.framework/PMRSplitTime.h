/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


@class NSString, NSMutableArray, NSArray;

@interface PMRSplitTime : NSObject {

	unsigned long long _splitTime;
	NSString* _key;
	NSString* _comment;
	NSMutableArray* _splitTimes;
	long long _level;
	unsigned long long _duration;

}

@property (nonatomic,copy) NSString * key;                              //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * comment;                          //@synthesize comment=_comment - In the implementation block
@property (assign,nonatomic) long long level;                           //@synthesize level=_level - In the implementation block
@property (assign,nonatomic) unsigned long long splitTime;              //@synthesize splitTime=_splitTime - In the implementation block
@property (assign,nonatomic) unsigned long long duration;               //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy) NSArray * splitTimes;                        //@synthesize splitTimes=_splitTimes - In the implementation block
-(void)dealloc;
-(id)description;
-(NSString *)key;
-(long long)level;
-(void)setKey:(NSString *)arg1 ;
-(unsigned long long)duration;
-(void)setDuration:(unsigned long long)arg1 ;
-(NSString *)comment;
-(void)setLevel:(long long)arg1 ;
-(void)setComment:(NSString *)arg1 ;
-(id)initWithKey:(id)arg1 comment:(id)arg2 level:(long long)arg3 duration:(unsigned long long)arg4 ;
-(id)dumpTraceLog;
-(void)removeSplitTimesObject:(id)arg1 ;
-(void)setSplitTime:(unsigned long long)arg1 ;
-(void)setSplitTimes:(NSArray *)arg1 ;
-(id)_subtreeDescription;
-(id)initWithKey:(id)arg1 comment:(id)arg2 level:(long long)arg3 ;
-(void)addSplitTimesObject:(id)arg1 ;
-(unsigned long long)splitTime;
-(NSArray *)splitTimes;
@end

