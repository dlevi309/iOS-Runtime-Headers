/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUIInternal.framework/SpotlightUIInternal
*/


@protocol SPUISearchHeaderDelegate <NSObject>
@required
-(void)dictationButtonPressed;
-(void)returnKeyPressed;
-(void)performWebSearch;
-(void)removeCompletionAndHighlightAsTyped:(BOOL)arg1;
-(void)cancelButtonPressed;
-(void)queryContextDidChange:(id)arg1 fromSearchHeader:(id)arg2 allowZKW:(BOOL)arg3;
-(void)didBeginEditing;

@end

