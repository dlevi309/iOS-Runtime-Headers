/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

