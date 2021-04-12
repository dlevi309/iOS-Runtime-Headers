/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
*/


@interface DAECalendarDirectorySearchContext : NSObject {

	/*^block*/id _resultsBlock;
	/*^block*/id _completionBlock;

}
-(void)finishedWithError:(id)arg1 exceededResultLimit:(BOOL)arg2 ;
-(id)initWithResultsBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)resultsReturned:(id)arg1 ;
@end

