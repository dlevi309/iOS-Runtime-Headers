/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/


@protocol OS_dispatch_source, OS_dispatch_queue, _CPLScheduledOverrideDelegate;
@class NSObject, NSString, NSDate;

@interface _CPLScheduledOverride : NSObject {

	NSObject*<OS_dispatch_source> _timer;
	NSString* _storageKey;
	NSDate* _endDate;
	unsigned long long _budget;
	NSObject*<OS_dispatch_queue> _queue;
	id<_CPLScheduledOverrideDelegate> _delegate;

}

@property (nonatomic,readonly) unsigned long long budget;                                    //@synthesize budget=_budget - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                           //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<_CPLScheduledOverrideDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * status; 
+(unsigned long long)_systemBudgetForBudgetKey:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<_CPLScheduledOverrideDelegate>)delegate;
-(void)setDelegate:(id<_CPLScheduledOverrideDelegate>)arg1 ;
-(void)cancel;
-(NSString *)status;
-(unsigned long long)budget;
-(BOOL)scheduleEndOfOverride;
-(id)initWithBudget:(unsigned long long)arg1 queue:(id)arg2 ;
-(void)_scheduleEndWithTimeInterval:(double)arg1 ;
-(BOOL)scheduleEndFromPersistedOverride;
@end

