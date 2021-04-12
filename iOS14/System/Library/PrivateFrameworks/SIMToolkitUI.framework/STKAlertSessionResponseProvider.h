/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
*/


@protocol STKAlertSessionResponseProvider <NSObject>
@property (nonatomic,readonly) NSObject*<OS_os_log> logger; 
@property (nonatomic,readonly) BOOL hasSentResponse; 
@optional
-(void)sendResponse:(long long)arg1 withBOOLResult:(BOOL)arg2;
-(void)sendSuccessWithSelectedIndex:(unsigned long long)arg1;

@required
-(void)sendResponse:(long long)arg1;
-(void)sendResponse:(long long)arg1 withStringResult:(id)arg2;
-(BOOL)hasSentResponse;
-(NSObject*<OS_os_log>)logger;

@end

