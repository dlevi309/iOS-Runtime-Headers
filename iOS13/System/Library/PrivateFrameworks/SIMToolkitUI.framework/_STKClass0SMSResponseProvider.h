/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
*/

#import <libobjc.A.dylib/STKAlertSessionResponseProvider.h>

@protocol OS_os_log;
@class NSObject, NSString;

@interface _STKClass0SMSResponseProvider : NSObject <STKAlertSessionResponseProvider> {

	NSObject*<OS_os_log> _logger;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSObject*<OS_os_log> logger; 
@property (nonatomic,readonly) BOOL hasSentResponse; 
-(NSObject*<OS_os_log>)logger;
-(void)sendResponse:(long long)arg1 ;
-(id)initWithLogger:(id)arg1 ;
-(void)sendResponse:(long long)arg1 withStringResult:(id)arg2 ;
-(BOOL)hasSentResponse;
@end

