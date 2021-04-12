/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBExtensionHandling.h>

@class NSHashTable, NSString;

@interface SBAvocadoDebuggingController : NSObject <SBExtensionHandling> {

	NSHashTable* _inFlightAnimationTransactions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)launchExtensionWithBundleID:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)init;
-(id)_descriptorForWidgetFromExtension:(id)arg1 forRequestedKind:(id)arg2 widgetFamily:(long long*)arg3 toolService:(id)arg4 error:(id*)arg5 ;
-(void)reallyLaunchToWidgetOnHomeScreenForDescriptor:(id)arg1 widgetFamily:(long long)arg2 ;
@end

