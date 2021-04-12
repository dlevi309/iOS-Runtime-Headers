/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

