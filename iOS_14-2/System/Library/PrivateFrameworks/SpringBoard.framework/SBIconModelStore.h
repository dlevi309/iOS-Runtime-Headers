/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBIconModelStore <NSObject>
@required
-(BOOL)saveCurrentIconState:(id)arg1 error:(id*)arg2;
-(BOOL)deleteCurrentIconStateWithOptions:(unsigned long long)arg1 error:(id*)arg2;
-(BOOL)saveDesiredIconState:(id)arg1 error:(id*)arg2;
-(id)loadCurrentIconState:(id*)arg1;
-(id)loadDesiredIconState:(id*)arg1;
-(BOOL)deleteDesiredIconStateWithOptions:(unsigned long long)arg1 error:(id*)arg2;

@end

