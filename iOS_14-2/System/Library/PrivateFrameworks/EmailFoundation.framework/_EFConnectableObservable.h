/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <EmailFoundation/EFObservable.h>
#import <libobjc.A.dylib/EFConnectableObservable.h>

@protocol EFObservable, EFObservableEFObserver;
@class NSLock, EFCancelationToken, NSString;

@interface _EFConnectableObservable : EFObservable <EFConnectableObservable> {

	id<EFObservable> _observable;
	id<EFObservable><EFObserver> _subject;
	NSLock* _lock;
	EFCancelationToken* _cancelable;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_disconnect;
-(id)connect;
-(id)subscribe:(id)arg1 ;
-(id)initWithObservable:(id)arg1 subject:(id)arg2 ;
@end

