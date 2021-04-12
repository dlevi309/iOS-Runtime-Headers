/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVKVONotifier.h>

@protocol AVWeakObservable;
@class AVCallbackContextRegistry, NSObject, AVWeakReference, NSString;

@interface AVWeaklyObservedObjectClientBlockKVONotifier : NSObject <AVKVONotifier> {

	AVCallbackContextRegistry* _callbackContextRegistry;
	void* _callbackContextToken;
	NSObject* _observer;
	AVWeakReference* _weakReferenceToObject;
	NSObject*<AVWeakObservable> _unsafeUnretainedObject;
	NSString* _keyPath;
	unsigned long long _options;
	/*^block*/id _block;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)start;
-(id)initWithCallbackContextRegistry:(id)arg1 observer:(id)arg2 object:(id)arg3 keyPath:(id)arg4 options:(unsigned long long)arg5 block:(/*^block*/id)arg6 ;
-(void)callbackDidFireWithChangeDictionary:(id)arg1 ;
-(void)cancelCallbacks;
-(void)dealloc;
@end

