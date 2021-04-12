/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@class NSObject, NSKeyValueProperty;

@interface NSKeyValueObservance : NSObject {

	NSObject* _observer;
	NSKeyValueProperty* _property;
	void* _context;
	NSObject* _originalObservable;
	unsigned _options : 7;
	unsigned _cachedIsShareable : 1;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)_initWithObserver:(id)arg1 property:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 originalObservable:(id)arg5 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

