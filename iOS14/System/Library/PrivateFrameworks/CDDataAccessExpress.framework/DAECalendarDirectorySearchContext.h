/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccessExpress.framework/CDDataAccessExpress
*/


@interface DAECalendarDirectorySearchContext : NSObject {

	/*^block*/id _resultsBlock;
	/*^block*/id _completionBlock;

}
-(void)finishedWithError:(id)arg1 exceededResultLimit:(BOOL)arg2 ;
-(id)initWithResultsBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)resultsReturned:(id)arg1 ;
@end

