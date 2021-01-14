/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <libobjc.A.dylib/EFCancelable.h>

@class NSString;

@interface _EFKeyValueObserverHandler : NSObject <EFCancelable> {

	id _object;
	NSString* _keyPath;
	/*^block*/id _block;
	BOOL _observing;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)startObservingWithOptions:(unsigned long long)arg1 ;
-(id)initWithObject:(id)arg1 keyPath:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)cancel;
-(void)dealloc;
@end

