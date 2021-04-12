/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@class NSDate;

@interface _REActionInvocationData : NSObject {

	BOOL _remote;
	NSDate* _date;
	unsigned long long _count;

}

@property (nonatomic,retain) NSDate * date;                         //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) BOOL remote;                           //@synthesize remote=_remote - In the implementation block
@property (assign,nonatomic) unsigned long long count;              //@synthesize count=_count - In the implementation block
-(unsigned long long)count;
-(NSDate *)date;
-(void)setCount:(unsigned long long)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(BOOL)remote;
-(void)setRemote:(BOOL)arg1 ;
@end

