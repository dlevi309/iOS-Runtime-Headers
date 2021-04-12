/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
*/


@class NSArray;

@interface _CNAutocompleteObservableBuilderBatchingHelper : NSObject {

	NSArray* _batches;

}

@property (nonatomic,readonly) NSArray * batches;              //@synthesize batches=_batches - In the implementation block
-(NSArray *)batches;
-(id)initWithBatchCount:(unsigned long long)arg1 ;
-(id)batchedObservables;
-(void)addObservable:(id)arg1 toBatchAtIndex:(unsigned long long)arg2 ;
@end

