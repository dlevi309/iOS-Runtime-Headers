/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <Foundation/NSOperation.h>

@class NSString, EKDirectorySearchQuery, NSError;

@interface EKDirectorySearchOperation : NSOperation {

	BOOL _isFinished;
	BOOL _isExecuting;
	NSString* _accountID;
	EKDirectorySearchQuery* _query;
	/*^block*/id _resultsBlock;
	id _searchID;
	BOOL _numberOfMatchesExceededLimit;
	NSError* _error;

}

@property (assign,nonatomic) BOOL numberOfMatchesExceededLimit;              //@synthesize numberOfMatchesExceededLimit=_numberOfMatchesExceededLimit - In the implementation block
@property (nonatomic,retain) NSError * error;                                //@synthesize error=_error - In the implementation block
+(BOOL)isSupported;
-(id)init;
-(NSError *)error;
-(void)cancel;
-(void)start;
-(void)main;
-(void)setError:(NSError *)arg1 ;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isConcurrent;
-(void)_finishWithError:(id)arg1 ;
-(id)initWithSource:(id)arg1 query:(id)arg2 resultsBlock:(/*^block*/id)arg3 ;
-(BOOL)numberOfMatchesExceededLimit;
-(id)_recordTypes;
-(void)_processResults:(id)arg1 ;
-(void)setNumberOfMatchesExceededLimit:(BOOL)arg1 ;
-(id)_processGroupsInResults:(id)arg1 ;
-(id)_processLocationsInResults:(id)arg1 ;
-(id)_processResourcesInResults:(id)arg1 ;
-(id)_processPeopleInResults:(id)arg1 ;
@end

