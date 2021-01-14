/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <ContactsFoundation/CNObservable.h>
#import <libobjc.A.dylib/_CNAmbObserverDelegate.h>

@class NSArray, NSMapTable, NSString;

@interface _CNAmbObservable : CNObservable <_CNAmbObserverDelegate> {

	NSArray* _observables;
	NSMapTable* _tokensByObserver;
	BOOL _winnerDeclared;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)subscribe:(id)arg1 ;
-(void)cancelRemainingObservables;
-(void)observerWillRelayEvent:(id)arg1 ;
-(id)initWithObservables:(id)arg1 ;
@end

