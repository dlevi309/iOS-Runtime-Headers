/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol CSResetRestoreStatusProviding <NSObject>
@property (getter=isRestoring,nonatomic,readonly) BOOL restoring; 
@property (nonatomic,readonly) long long restoreState; 
@property (getter=isResetting,nonatomic,readonly) BOOL resetting; 
@property (nonatomic,readonly) long long resetState; 
@required
-(long long)restoreState;
-(long long)resetState;
-(BOOL)isRestoring;
-(BOOL)isResetting;

@end

