/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol CSResetRestoreStatusProviding <NSObject>
@property (getter=isRestoring,nonatomic,readonly) BOOL restoring; 
@property (nonatomic,readonly) long long restoreState; 
@property (getter=isResetting,nonatomic,readonly) BOOL resetting; 
@property (nonatomic,readonly) long long resetState; 
@required
-(BOOL)isRestoring;
-(long long)restoreState;
-(long long)resetState;
-(BOOL)isResetting;

@end

