/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <ContactsFoundation/CNObservable.h>
#import <libobjc.A.dylib/CNAsynchronousCacheEntryDelegate.h>

@class NSMutableArray, NSString;

@interface CNAsynchronousCacheEntryDelegateObservable : CNObservable <CNAsynchronousCacheEntryDelegate> {

	NSMutableArray* _observers;
	id _currentValue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)subscribe:(id)arg1 ;
-(void)cacheEntryDidUpdateValue:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
@end

