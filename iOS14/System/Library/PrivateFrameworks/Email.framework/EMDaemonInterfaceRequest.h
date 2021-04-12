/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <libobjc.A.dylib/EFSignpostable.h>

@class NSString;

@interface EMDaemonInterfaceRequest : NSObject <EFSignpostable>

@property (readonly) unsigned long long signpostID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)signpostLog;
+(id)systemScopeSignpostLog;
+(unsigned long long)uniqueRequestID;
-(unsigned long long)signpostID;
@end

