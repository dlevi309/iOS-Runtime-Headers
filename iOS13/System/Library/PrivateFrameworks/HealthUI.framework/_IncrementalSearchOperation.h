/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)main;
-(NSRegularExpression *)regularExpression;
-(id)searchResultsBlock;
-(id)initWithSearchString:(id)arg1 searchBody:(id)arg2 resultsBlock:(/*^block*/id)arg3 finishedBlock:(/*^block*/id)arg4 ;
-(NSString *)searchBody;
-(id)searchFinishedBlock;
@end

