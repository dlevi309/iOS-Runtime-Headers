/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


@class NSString, NSMutableArray, NSDictionary, NSArray;

@interface PMRSplitTime : NSObject {

	unsigned long long _splitTime;
	NSString* _key;
	NSString* _comment;
	NSMutableArray* _splitTimes;
	long long _level;
	unsigned long long _duration;
	NSDictionary* _userInfo;

}

@property (nonatomic,copy) NSString * key;                              //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * comment;                          //@synthesize comment=_comment - In the implementation block
@property (assign,nonatomic) long long level;                           //@synthesize level=_level - In the implementation block
@property (assign,nonatomic) unsigned long long splitTime;              //@synthesize splitTime=_splitTime - In the implementation block
@property (assign,nonatomic) unsigned long long duration;               //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy) NSArray * splitTimes;                        //@synthesize splitTimes=_splitTimes - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;                     //@synthesize userInfo=_userInfo - In the implementation block
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSString *)comment;
-(void)setComment:(NSString *)arg1 ;
-(void)setDuration:(unsigned long long)arg1 ;
-(NSDictionary *)userInfo;
-(id)description;
-(long long)level;
-(NSString *)key;
-(void)setLevel:(long long)arg1 ;
-(unsigned long long)duration;
-(void)setKey:(NSString *)arg1 ;
-(void)dealloc;
-(id)initWithKey:(id)arg1 comment:(id)arg2 level:(long long)arg3 duration:(unsigned long long)arg4 userInfo:(id)arg5 ;
-(NSArray *)splitTimes;
-(id)initWithKey:(id)arg1 comment:(id)arg2 level:(long long)arg3 ;
-(id)_subtreeDescription;
-(id)dumpTraceLog;
-(void)addSplitTimesObject:(id)arg1 ;
-(void)removeSplitTimesObject:(id)arg1 ;
-(unsigned long long)splitTime;
-(void)setSplitTime:(unsigned long long)arg1 ;
-(void)setSplitTimes:(NSArray *)arg1 ;
@end
