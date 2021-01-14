/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@class NSObject, NSKeyValueProperty;

@interface NSKeyValueObservance : NSObject {

	NSObject* _observer;
	NSKeyValueProperty* _property;
	void* _context;
	NSObject* _originalObservable;
	unsigned _options : 6;
	unsigned _cachedIsShareable : 1;
	unsigned _isInternalObservationHelper : 1;

}
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)description;
-(unsigned long long)hash;
-(id)_initWithObserver:(id)arg1 property:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 originalObservable:(id)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
@end

