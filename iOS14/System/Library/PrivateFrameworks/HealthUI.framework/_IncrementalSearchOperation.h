/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <Foundation/NSOperation.h>

@class NSRegularExpression, NSString;

@interface _IncrementalSearchOperation : NSOperation {

	NSRegularExpression* _regularExpression;
	NSString* _searchBody;
	/*^block*/id _searchResultsBlock;
	/*^block*/id _searchFinishedBlock;

}

@property (readonly) NSRegularExpression * regularExpression;              //@synthesize regularExpression=_regularExpression - In the implementation block
@property (readonly) NSString * searchBody;                                //@synthesize searchBody=_searchBody - In the implementation block
@property (readonly) id searchResultsBlock;                                //@synthesize searchResultsBlock=_searchResultsBlock - In the implementation block
@property (readonly) id searchFinishedBlock;                               //@synthesize searchFinishedBlock=_searchFinishedBlock - In the implementation block
-(NSRegularExpression *)regularExpression;
-(id)searchResultsBlock;
-(void)main;
-(id)initWithSearchString:(id)arg1 searchBody:(id)arg2 resultsBlock:(/*^block*/id)arg3 finishedBlock:(/*^block*/id)arg4 ;
-(NSString *)searchBody;
-(id)searchFinishedBlock;
@end

