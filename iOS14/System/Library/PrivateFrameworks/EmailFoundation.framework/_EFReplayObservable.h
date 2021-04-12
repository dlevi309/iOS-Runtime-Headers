/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)subscribe:(id)arg1 ;
-(void)observerDidFailWithError:(id)arg1 ;
-(void)_unsubscribe:(id)arg1 ;
-(id)initWithCount:(unsigned long long)arg1 ;
-(void)observerDidComplete;
-(void)observerDidReceiveResult:(id)arg1 ;
@end

