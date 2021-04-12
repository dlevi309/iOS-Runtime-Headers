/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
*/


@class NSMutableDictionary, NSOrderedSet;

@interface DOCFileProviderDomainMonitor : NSObject {

	id _providerDomainMonitoringContext;
	NSMutableDictionary* _providerNames;
	NSOrderedSet* _monitoredIdentifiers;
	/*^block*/id _monitorCallback;

}
-(id)init;
-(void)dealloc;
-(void)notifyIfNecessary;
-(void)monitorProviderDomainNamesForSourceIdentifiers:(id)arg1 callback:(/*^block*/id)arg2 ;
@end

