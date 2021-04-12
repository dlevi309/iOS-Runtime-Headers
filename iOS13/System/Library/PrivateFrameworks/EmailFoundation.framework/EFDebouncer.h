/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <libobjc.A.dylib/EFCancelable.h>

@protocol EFObserver, EFCancelable;
@class EFObservable, NSString;

@interface EFDebouncer : NSObject <EFCancelable> {

	EFObservable*<EFObserver> _observable;
	id<EFCancelable> _cancelable;

}

@property (nonatomic,readonly) EFObservable*<EFObserver> observable;              //@synthesize observable=_observable - In the implementation block
@property (nonatomic,readonly) id<EFCancelable> cancelable;                       //@synthesize cancelable=_cancelable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(EFObservable*<EFObserver>)observable;
-(id<EFCancelable>)cancelable;
-(id)initWithTimeInterval:(double)arg1 scheduler:(id)arg2 startAfter:(unsigned long long)arg3 block:(/*^block*/id)arg4 ;
-(void)debounceResult:(id)arg1 ;
@end

