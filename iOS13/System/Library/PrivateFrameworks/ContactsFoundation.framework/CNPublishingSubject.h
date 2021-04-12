/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <ContactsFoundation/CNObservable.h>
#import <libobjc.A.dylib/CNObserver.h>

@protocol CNCancelable;
@class CNObservable, NSMutableArray, CNObservableContractEnforcement, NSString;

@interface CNPublishingSubject : CNObservable <CNObserver> {

	CNObservable* _observable;
	id<CNCancelable> _upstreamToken;
	NSMutableArray* _observers;
	CNObservableContractEnforcement* _enforcement;

}

@property (nonatomic,readonly) CNObservable * observable;                                  //@synthesize observable=_observable - In the implementation block
@property (nonatomic,retain) id<CNCancelable> upstreamToken;                               //@synthesize upstreamToken=_upstreamToken - In the implementation block
@property (nonatomic,readonly) NSMutableArray * observers;                                 //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) CNObservableContractEnforcement * enforcement;              //@synthesize enforcement=_enforcement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)_removeObserver:(id)arg1 ;
-(void)_addObserver:(id)arg1 ;
-(NSMutableArray *)observers;
-(void)observerDidReceiveResult:(id)arg1 ;
-(void)observerDidFailWithError:(id)arg1 ;
-(void)observerDidComplete;
-(id)subscribe:(id)arg1 ;
-(CNObservableContractEnforcement *)enforcement;
-(CNObservable *)observable;
-(id)initWithObservable:(id)arg1 ;
-(void)_subscribeToObservableIfNecessary;
-(id)_allObservers;
-(id<CNCancelable>)upstreamToken;
-(void)setUpstreamToken:(id<CNCancelable>)arg1 ;
@end

