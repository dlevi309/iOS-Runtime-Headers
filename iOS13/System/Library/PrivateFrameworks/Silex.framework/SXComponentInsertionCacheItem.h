/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@protocol SXComponentInserter, SXComponentInsertionCacheValidator;
@class NSArray;

@interface SXComponentInsertionCacheItem : NSObject {

	id<SXComponentInserter> _inserter;
	id<SXComponentInsertionCacheValidator> _validator;
	NSArray* _results;

}

@property (nonatomic,readonly) id<SXComponentInserter> inserter;                              //@synthesize inserter=_inserter - In the implementation block
@property (nonatomic,readonly) id<SXComponentInsertionCacheValidator> validator;              //@synthesize validator=_validator - In the implementation block
@property (nonatomic,readonly) NSArray * results;                                             //@synthesize results=_results - In the implementation block
-(NSArray *)results;
-(id<SXComponentInsertionCacheValidator>)validator;
-(id)initWithInserter:(id)arg1 validator:(id)arg2 results:(id)arg3 ;
-(id<SXComponentInserter>)inserter;
@end

