/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <EmailFoundation/EFObservable.h>
#import <libobjc.A.dylib/EFObserver.h>

@class NSLock, NSError, EFQueue, NSMutableArray, NSString;

@interface _EFReplayObservable : EFObservable <EFObserver> {

	NSLock* _lock;
	BOOL _isStopped;
	NSError* _error;
	EFQueue* _queue;
	NSMutableArray* _observers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCount:(unsigned long long)arg1 ;
-(void)observerDidReceiveResult:(id)arg1 ;
-(void)observerDidFailWithError:(id)arg1 ;
-(void)observerDidComplete;
-(id)subscribe:(id)arg1 ;
-(void)_unsubscribe:(id)arg1 ;
@end

