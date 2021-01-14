/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <libobjc.A.dylib/CNObserver.h>

@protocol CNObserver, _CNAmbObserverDelegate;
@class NSString;

@interface _CNAmbObserver : NSObject <CNObserver> {

	id<CNObserver> _observer;
	id<_CNAmbObserverDelegate> _delegate;
	BOOL _isWinner;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)observerDidFailWithError:(id)arg1 ;
-(void)observerDidComplete;
-(id)initWithObserver:(id)arg1 delegate:(id)arg2 ;
-(void)observerDidReceiveResult:(id)arg1 ;
-(void)declareWinner;
@end

