/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCFeedTransforming.h>

@class NSString;

@interface FCFeedTransformationFeedThrottle : NSObject <FCFeedTransforming> {

	/*^block*/id _condition;
	unsigned long long _limit;

}

@property (nonatomic,copy) id condition;                            //@synthesize condition=_condition - In the implementation block
@property (assign,nonatomic) unsigned long long limit;              //@synthesize limit=_limit - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transformationWithDailyLimit:(unsigned long long)arg1 timeInterval:(double)arg2 feedID:(id)arg3 ;
+(id)transformationWithDailyLimit:(unsigned long long)arg1 timeInterval:(double)arg2 condition:(/*^block*/id)arg3 ;
+(id)transformationWithFeedID:(id)arg1 limit:(unsigned long long)arg2 ;
-(void)setCondition:(id)arg1 ;
-(void)setLimit:(unsigned long long)arg1 ;
-(unsigned long long)limit;
-(id)condition;
-(id)transformFeedItems:(id)arg1 ;
@end

