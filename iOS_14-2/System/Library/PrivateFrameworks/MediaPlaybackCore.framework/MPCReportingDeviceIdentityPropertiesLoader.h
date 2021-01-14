/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <libobjc.A.dylib/MPCReportingIdentityPropertiesLoading.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface MPCReportingDeviceIdentityPropertiesLoader : NSObject <MPCReportingIdentityPropertiesLoading> {

	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSObject*<OS_dispatch_queue> _serialWorkQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedLoader;
-(id)init;
-(void)loadReportingIdentityPropertiesWithCompletionHandler:(/*^block*/id)arg1 ;
@end

