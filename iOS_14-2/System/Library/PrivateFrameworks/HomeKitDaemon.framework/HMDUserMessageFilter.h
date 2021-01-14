/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFMessageFilter.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSString;

@interface HMDUserMessageFilter : HMFMessageFilter <HMFLogging>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(BOOL)canInitWithMessage:(id)arg1 ;
-(BOOL)acceptWithPolicies:(id)arg1 error:(id*)arg2 ;
@end

