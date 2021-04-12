/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <EmailFoundation/EmailFoundation-Structs.h>
#import <EmailFoundation/EFObservable.h>
#import <libobjc.A.dylib/EFObserver.h>

@class NSMutableArray, NSError, NSString;

@interface _EFManualObservable : EFObservable <EFObserver> {

	NSMutableArray* _observers;
	NSError* _failureError;
	os_unfair_lock_s _lock;
	BOOL _didCompleteOrFail;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)_removeObserver:(id)arg1 ;
-(void)observerDidReceiveResult:(id)arg1 ;
-(void)observerDidFailWithError:(id)arg1 ;
-(void)observerDidComplete;
-(id)subscribe:(id)arg1 ;
-(BOOL)_addObserver:(id)arg1 failureError:(id*)arg2 ;
@end

