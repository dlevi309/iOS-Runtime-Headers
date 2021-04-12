/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <libobjc.A.dylib/EFSignpostable.h>

@class NSString;

@interface EMDaemonInterfaceRequest : NSObject <EFSignpostable>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned long long signpostID; 
+(id)signpostLog;
+(id)systemScopeSignpostLog;
+(unsigned long long)uniqueRequestID;
-(unsigned long long)signpostID;
@end

