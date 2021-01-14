/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/


@protocol CNSchedulerProvider;
@class NSMutableArray;

@interface CNAsynchronousCacheEntry : NSObject {

	id _currentValue;
	double _timestampOfCurrentValue;
	id<CNSchedulerProvider> _schedulerProvider;
	NSMutableArray* _delegates;

}

@property (readonly) id<CNSchedulerProvider> schedulerProvider;              //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
@property (retain) id currentValue;                                          //@synthesize currentValue=_currentValue - In the implementation block
@property (readonly) NSMutableArray * delegates;                             //@synthesize delegates=_delegates - In the implementation block
@property (readonly) double timestampOfCurrentValue;                         //@synthesize timestampOfCurrentValue=_timestampOfCurrentValue - In the implementation block
-(NSMutableArray *)delegates;
-(void)addDelegate:(id)arg1 ;
-(id<CNSchedulerProvider>)schedulerProvider;
-(id)initWithSchedulerProvider:(id)arg1 ;
-(id)description;
-(void)removeDelegates:(id)arg1 ;
-(void)updateValue:(id)arg1 ;
-(double)timestampOfCurrentValue;
-(id)currentValue;
-(void)setCurrentValue:(id)arg1 ;
@end

