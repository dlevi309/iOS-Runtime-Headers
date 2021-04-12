/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
*/


@protocol STKAlertSessionResponseProvider <NSObject>
@property (nonatomic,readonly) NSObject*<OS_os_log> logger; 
@property (nonatomic,readonly) BOOL hasSentResponse; 
@optional
-(void)sendResponse:(long long)arg1 withBOOLResult:(BOOL)arg2;
-(void)sendSuccessWithSelectedIndex:(unsigned long long)arg1;

@required
-(NSObject*<OS_os_log>)logger;
-(void)sendResponse:(long long)arg1;
-(void)sendResponse:(long long)arg1 withStringResult:(id)arg2;
-(BOOL)hasSentResponse;

@end

