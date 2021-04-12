/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <libobjc.A.dylib/WFLoggingBackend.h>

@protocol OS_os_log;
@class NSObject, NSString;

@interface WFSystemLoggingBackend : NSObject <WFLoggingBackend> {

	NSObject*<OS_os_log> _log;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)logEvent:(id)arg1 withProperties:(id)arg2 ;
@end

