/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVKVONotifier.h>
#import <AVFoundation/AVKVOIntrospection.h>

@class NSObject, AVCallbackContextRegistry, NSString;

@interface AVClientBlockKVONotifier : NSObject <AVKVONotifier, AVKVOIntrospection> {

	AVCallbackContextRegistry* _callbackContextRegistry;
	void* _callbackContextToken;
	NSObject* _observer;
	NSObject* _object;
	NSString* _keyPath;
	unsigned long long _options;
	/*^block*/id _block;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSObject * observedObject; 
-(void)dealloc;
-(void)start;
-(NSObject *)observedObject;
-(void)cancelCallbacks;
-(id)initWithCallbackContextRegistry:(id)arg1 observer:(id)arg2 object:(id)arg3 keyPath:(id)arg4 options:(unsigned long long)arg5 block:(/*^block*/id)arg6 ;
-(void)callbackDidFireWithChangeDictionary:(id)arg1 ;
@end

