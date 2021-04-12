/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSURLRequest, NSDate, NSString;

@interface FCURLRequest : NSObject {

	NSURLRequest* _URLRequest;
	long long _destination;
	long long _priority;
	NSDate* _dateInitiated;
	NSString* _loggingKey;
	/*^block*/id _completion;
	long long _remainingRetries;

}

@property (nonatomic,copy,readonly) NSURLRequest * URLRequest;              //@synthesize URLRequest=_URLRequest - In the implementation block
@property (nonatomic,readonly) long long destination;                       //@synthesize destination=_destination - In the implementation block
@property (assign,nonatomic) long long priority;                            //@synthesize priority=_priority - In the implementation block
@property (nonatomic,copy,readonly) NSDate * dateInitiated;                 //@synthesize dateInitiated=_dateInitiated - In the implementation block
@property (nonatomic,copy,readonly) NSString * loggingKey;                  //@synthesize loggingKey=_loggingKey - In the implementation block
@property (nonatomic,copy,readonly) id completion;                          //@synthesize completion=_completion - In the implementation block
@property (assign,nonatomic) long long remainingRetries;                    //@synthesize remainingRetries=_remainingRetries - In the implementation block
+(/*^block*/id)comparator;
-(NSString *)loggingKey;
-(long long)compare:(id)arg1 ;
-(void)setRemainingRetries:(long long)arg1 ;
-(long long)remainingRetries;
-(NSDate *)dateInitiated;
-(id)completion;
-(id)description;
-(long long)priority;
-(NSURLRequest *)URLRequest;
-(void)setPriority:(long long)arg1 ;
-(long long)destination;
-(id)initWithURLRequest:(id)arg1 destination:(long long)arg2 priority:(long long)arg3 dateInitiated:(id)arg4 loggingKey:(id)arg5 completion:(/*^block*/id)arg6 ;
@end

