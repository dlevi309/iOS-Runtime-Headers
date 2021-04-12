/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@protocol OS_dispatch_queue;
@class NSSet, NSObject, NSDate;

@interface FCFetchGroup : NSObject {

	BOOL _shouldFilter;
	BOOL _isUserFacing;
	NSSet* _keys;
	id _context;
	long long _qualityOfService;
	long long _relativePriority;
	unsigned long long _numberOfFetchAttempts;
	NSObject*<OS_dispatch_queue> _completionQueue;
	/*^block*/id _completion;
	NSDate* _requestDate;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> completionQueue;              //@synthesize completionQueue=_completionQueue - In the implementation block
@property (nonatomic,copy,readonly) id completion;                                        //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) NSDate * requestDate;                                        //@synthesize requestDate=_requestDate - In the implementation block
@property (nonatomic,copy,readonly) NSSet * keys;                                         //@synthesize keys=_keys - In the implementation block
@property (nonatomic,readonly) id context;                                                //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) BOOL shouldFilter;                                         //@synthesize shouldFilter=_shouldFilter - In the implementation block
@property (nonatomic,readonly) long long qualityOfService;                                //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (nonatomic,readonly) long long relativePriority;                                //@synthesize relativePriority=_relativePriority - In the implementation block
@property (nonatomic,readonly) BOOL isUserFacing;                                         //@synthesize isUserFacing=_isUserFacing - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfFetchAttempts;                    //@synthesize numberOfFetchAttempts=_numberOfFetchAttempts - In the implementation block
-(NSSet *)keys;
-(long long)qualityOfService;
-(id)context;
-(id)completion;
-(long long)comparePriority:(id)arg1 ;
-(long long)relativePriority;
-(NSObject*<OS_dispatch_queue>)completionQueue;
-(id)initWithKeys:(id)arg1 context:(id)arg2 shouldFilter:(BOOL)arg3 qualityOfService:(long long)arg4 relativePriority:(long long)arg5 completionQueue:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)fireCompletion;
-(BOOL)isUserFacing;
-(BOOL)shouldFilter;
-(unsigned long long)numberOfFetchAttempts;
-(void)setNumberOfFetchAttempts:(unsigned long long)arg1 ;
-(NSDate *)requestDate;
-(void)setRequestDate:(NSDate *)arg1 ;
@end

