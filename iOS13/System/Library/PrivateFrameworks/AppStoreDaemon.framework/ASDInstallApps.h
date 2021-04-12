/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <libobjc.A.dylib/ASDServiceProvider.h>

@class NSString;

@interface ASDInstallApps : NSObject <ASDServiceProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)interface;
+(void)installApp:(id)arg1 onPairedDevice:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
+(void)installApps:(id)arg1 onPairedDevice:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
+(void)_installApps:(id)arg1 onPairedDevice:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
+(id)_availableMetadataClasses;
+(void)installApp:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(void)installApps:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end

