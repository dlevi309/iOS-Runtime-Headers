/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(void)_installApps:(id)arg1 onPairedDevice:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
+(void)installApp:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(void)installApp:(id)arg1 onPairedDevice:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
+(id)_availableMetadataClasses;
+(void)installApps:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(void)installApps:(id)arg1 onPairedDevice:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
@end

