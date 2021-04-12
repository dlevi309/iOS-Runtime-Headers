/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)cancel;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)startObservingWithOptions:(unsigned long long)arg1 ;
-(id)initWithObject:(id)arg1 keyPath:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
@end

