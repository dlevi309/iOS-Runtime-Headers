/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/


@protocol PSSearchOperationDelegate <NSObject>
@required
-(id)searchOperation:(id)arg1 filteredEntriesForEntries:(id)arg2;
-(void)searchOperationDidBegin:(id)arg1;
-(void)searchOperation:(id)arg1 configureSearchResults:(id)arg2;
-(void)searchOperationDidFinish:(id)arg1 withResults:(id)arg2;
-(void)searchOperationDidCancel:(id)arg1;

@end

