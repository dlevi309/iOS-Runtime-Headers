/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)start;
-(void)_finishWithError:(id)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(BOOL)isFinished;
-(NSError *)error;
-(void)main;
-(BOOL)isExecuting;
-(void)cancel;
-(BOOL)isConcurrent;
-(id)_recordTypes;
-(void)_processResults:(id)arg1 ;
-(void)setNumberOfMatchesExceededLimit:(BOOL)arg1 ;
-(id)_processGroupsInResults:(id)arg1 ;
-(id)_processLocationsInResults:(id)arg1 ;
-(id)_processPeopleInResults:(id)arg1 ;
-(id)_processResourcesInResults:(id)arg1 ;
-(id)initWithSource:(id)arg1 query:(id)arg2 resultsBlock:(/*^block*/id)arg3 ;
-(BOOL)numberOfMatchesExceededLimit;
@end

