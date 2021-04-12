/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCount:(unsigned long long)arg1 ;
-(BOOL)remote;
-(unsigned long long)count;
-(void)setDate:(NSDate *)arg1 ;
-(NSDate *)date;
-(void)setRemote:(BOOL)arg1 ;
@end

