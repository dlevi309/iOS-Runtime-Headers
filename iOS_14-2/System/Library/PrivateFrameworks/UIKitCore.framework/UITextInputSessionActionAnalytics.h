/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol OS_dispatch_queue, UITextInputSessionActionAnalyticsDelegateSource;
#import <UIKitCore/UIKitCore-Structs.h>
@class NSObject, NSMutableOrderedSet, NSMutableSet;

@interface UITextInputSessionActionAnalytics : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableOrderedSet* _recentActions;
	NSMutableSet* _accumulators;
	unsigned long long _maxDepth;
	id<UITextInputSessionActionAnalyticsDelegateSource> _delegateSource;

}

@property (assign,nonatomic,__weak) id<UITextInputSessionActionAnalyticsDelegateSource> delegateSource;              //@synthesize delegateSource=_delegateSource - In the implementation block
+(void)q_notifyEndingObserversWithSessionAnalytics:(id)arg1 ;
+(void)addEndingObserver:(id)arg1 ;
+(void)removeEndingObserver:(id)arg1 ;
+(id)stringValueForSource:(long long)arg1 ;
+(id)allowedValuesForTextInputSource;
-(void)didUndo;
-(void)didRedo;
-(id)init;
-(void)didBegin;
-(void)didOther;
-(void)q_flushRecentActions;
-(void)addAccumulator:(id)arg1 ;
-(void)q_updateAnalyticsFromAccumulators;
-(id)_instanceOfActionClass:(Class)arg1 ;
-(void)q_addActionAndUpdate:(id)arg1 ;
-(void)didInsertText:(id)arg1 relativeRangeBefore:(NSRange)arg2 ;
-(void)didDeleteBackward:(unsigned long long)arg1 relativeRangeBefore:(NSRange)arg2 ;
-(void)didChangeToSelection:(NSRange)arg1 relativeRangeBefore:(NSRange)arg2 ;
-(id)allAccumulatorNames;
-(void)enumerateAnalytics:(/*^block*/id)arg1 ;
-(void)writeAnalytics;
-(void)setDelegateSource:(id<UITextInputSessionActionAnalyticsDelegateSource>)arg1 ;
-(void)q_addAccumulator:(id)arg1 ;
-(void)q_setupDefaultAnalytics;
-(id<UITextInputSessionActionAnalyticsDelegateSource>)delegateSource;
@end

