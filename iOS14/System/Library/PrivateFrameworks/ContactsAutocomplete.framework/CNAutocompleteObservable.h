/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CNObservable *)observable;
-(NSString *)debugDescription;
-(id)subscribe:(id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(void)setObservable:(CNObservable *)arg1 ;
-(void)setDebugDescription:(NSString *)arg1 ;
@end

