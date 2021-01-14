/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
*/


@class CNObservable;

@interface CNAutocompleteCalendarQueryAssembler : NSObject {

	CNObservable* _cachedObservable;
	CNObservable* _uncachedObservable;
	CNObservable* _rawCachedObservable;
	CNObservable* _rawUncachedObservable;

}

@property (readonly) CNObservable * rawCachedObservable;                //@synthesize rawCachedObservable=_rawCachedObservable - In the implementation block
@property (readonly) CNObservable * rawUncachedObservable;              //@synthesize rawUncachedObservable=_rawUncachedObservable - In the implementation block
@property (readonly) CNObservable * cachedObservable;                   //@synthesize cachedObservable=_cachedObservable - In the implementation block
@property (readonly) CNObservable * uncachedObservable;                 //@synthesize uncachedObservable=_uncachedObservable - In the implementation block
-(id)description;
-(CNObservable *)rawCachedObservable;
-(CNObservable *)rawUncachedObservable;
-(id)initWithRawCachedObservable:(id)arg1 rawUncachedObservable:(id)arg2 ;
-(void)assemble;
-(CNObservable *)cachedObservable;
-(CNObservable *)uncachedObservable;
@end

