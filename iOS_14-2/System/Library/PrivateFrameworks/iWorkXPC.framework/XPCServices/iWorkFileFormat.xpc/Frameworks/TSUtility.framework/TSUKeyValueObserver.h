/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/


@class NSString;

@interface TSUKeyValueObserver : NSObject {

	id _target;
	NSString* _keyPath;
	/*^block*/id _changeHandler;

}
+(id)observerWithTarget:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 changeHandler:(/*^block*/id)arg4 ;
+(id)observerWithTarget:(id)arg1 keyPath:(id)arg2 changeHandler:(/*^block*/id)arg3 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)dealloc;
-(id)initWithTarget:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 changeHandler:(/*^block*/id)arg4 ;
@end

