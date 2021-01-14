/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_removeObserver:(id)arg1 ;
-(id)init;
-(id)subscribe:(id)arg1 ;
-(void)observerDidFailWithError:(id)arg1 ;
-(void)observerDidComplete;
-(void)observerDidReceiveResult:(id)arg1 ;
-(BOOL)_addObserver:(id)arg1 failureError:(id*)arg2 ;
@end

