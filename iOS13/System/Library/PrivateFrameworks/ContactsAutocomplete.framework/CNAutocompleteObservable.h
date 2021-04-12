/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
*/

#import <ContactsFoundation/CNObservable.h>

@class NSString, CNObservable;

@interface CNAutocompleteObservable : CNObservable {

	NSString* _debugDescription;
	CNObservable* _observable;

}

@property (nonatomic,retain) CNObservable * observable;                //@synthesize observable=_observable - In the implementation block
@property (nonatomic,retain) NSString * debugDescription;              //@synthesize debugDescription=_debugDescription - In the implementation block
-(NSString *)debugDescription;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(void)setDebugDescription:(NSString *)arg1 ;
-(id)subscribe:(id)arg1 ;
-(CNObservable *)observable;
-(void)setObservable:(CNObservable *)arg1 ;
@end

