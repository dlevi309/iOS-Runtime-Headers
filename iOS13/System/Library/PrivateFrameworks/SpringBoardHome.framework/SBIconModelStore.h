/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/


@protocol SBIconModelStore <NSObject>
@required
-(BOOL)deleteDesiredIconStateWithOptions:(unsigned long long)arg1 error:(id*)arg2;
-(id)loadDesiredIconState:(id*)arg1;
-(id)loadCurrentIconState:(id*)arg1;
-(BOOL)deleteCurrentIconStateWithOptions:(unsigned long long)arg1 error:(id*)arg2;
-(BOOL)saveDesiredIconState:(id)arg1 error:(id*)arg2;
-(BOOL)saveCurrentIconState:(id)arg1 error:(id*)arg2;

@end

