/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/


@protocol OS_dispatch_source, OS_dispatch_queue, _CPLScheduledOverrideDelegate;
@class NSObject, NSString, NSDate;

@interface _CPLScheduledOverride : NSObject {

	NSObject*<OS_dispatch_source> _timer;
	NSString* _storageKey;
	unsigned long long _budget;
	NSObject*<OS_dispatch_queue> _queue;
	NSDate* _endDate;
	id<_CPLScheduledOverrideDelegate> _delegate;

}

@property (nonatomic,readonly) unsigned long long budget;                                    //@synthesize budget=_budget - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                           //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                                             //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic,__weak) id<_CPLScheduledOverrideDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * status; 
+(unsigned long long)_systemBudgetForBudgetKey:(id)arg1 ;
-(unsigned long long)budget;
-(NSDate *)endDate;
-(id<_CPLScheduledOverrideDelegate>)delegate;
-(void)setDelegate:(id<_CPLScheduledOverrideDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)cancel;
-(NSString *)status;
-(BOOL)scheduleEndOfOverride;
-(id)initWithBudget:(unsigned long long)arg1 queue:(id)arg2 ;
-(void)_scheduleEndWithTimeInterval:(double)arg1 ;
-(BOOL)scheduleEndFromPersistedOverride;
@end

