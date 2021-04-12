/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
*/


@protocol DASearchQueryConsumer
@optional
-(void)searchQuery:(id)arg1 returnedTotalCount:(id)arg2;

@required
-(void)searchQuery:(id)arg1 returnedResults:(id)arg2;
-(void)searchQuery:(id)arg1 finishedWithError:(id)arg2;

@end

