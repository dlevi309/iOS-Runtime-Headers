/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@protocol OS_dispatch_queue, AVCallbackCancellation;
@class NSObject, AVKVODispatcher, AVWeakReference, NSString, AVTwoPartKeyPath;

@interface AVKeyPathDependency : NSObject {

	NSObject*<OS_dispatch_queue> _subObjectRegistrationQueue;
	AVKVODispatcher* _KVODispatcher;
	AVWeakReference* _weakReferenceToObject;
	NSString* _dependentKey;
	AVTwoPartKeyPath* _dependencyKeyPath;
	id<AVCallbackCancellation> _leafPropertyChangeNotifier;

}
+(void)initialize;
-(void)dealloc;
-(id)description;
-(void)initializationIsCompleteForObject:(id)arg1 ;
-(id)initWithObject:(id)arg1 thatHasPropertyWithKey:(id)arg2 whoseValueDependsOnValueAtKeyPath:(id)arg3 ;
-(void)_reactToTopLevelPropertyChange:(id)arg1 ;
-(void)_startObservingSecondLevelPropertyOnNewCurrentValueForTopLevelDependencyProperty:(id)arg1 ;
-(void)_reactToSecondLevelPropertyChange:(id)arg1 ;
@end

