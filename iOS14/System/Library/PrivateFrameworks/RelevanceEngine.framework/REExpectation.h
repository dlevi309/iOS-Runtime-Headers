/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@protocol OS_dispatch_group;
@class NSObject;

@interface REExpectation : NSObject {

	NSObject*<OS_dispatch_group> _group;
	Ai _count;

}

@property (nonatomic,readonly) long long outstandingOperations; 
-(id)init;
-(void)beginOperation;
-(void)endOperation;
-(long long)outstandingOperations;
-(void)notifyOperationsCompleteOnQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)notifyOperationsCompleteOrPerformUsingQueue:(id)arg1 block:(/*^block*/id)arg2 ;
@end

