/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/


@protocol PSSearchOperationDelegate <NSObject>
@required
-(void)searchOperationDidBegin:(id)arg1;
-(id)searchOperation:(id)arg1 filteredEntriesForEntries:(id)arg2;
-(void)searchOperation:(id)arg1 configureSearchResults:(id)arg2;
-(void)searchOperationDidFinish:(id)arg1 withResults:(id)arg2;
-(void)searchOperationDidCancel:(id)arg1;

@end

