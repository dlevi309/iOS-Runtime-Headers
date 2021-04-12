/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)endOperation;
-(void)beginOperation;
-(long long)outstandingOperations;
-(void)notifyOperationsCompleteOnQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)notifyOperationsCompleteOrPerformUsingQueue:(id)arg1 block:(/*^block*/id)arg2 ;
@end

