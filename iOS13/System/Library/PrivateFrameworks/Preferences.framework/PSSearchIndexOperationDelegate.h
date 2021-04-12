/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/


@protocol PSSearchIndexOperationDelegate <PSSpecifierObserver>
@optional
-(void)searchIndexOperationDidCancel:(id)arg1;

@required
-(void)searchIndexOperation:(id)arg1 didFindSpecifierDataSource:(id)arg2;
-(void)searchIndexOperationDidFinish:(id)arg1 searchEntries:(id)arg2;

@end

