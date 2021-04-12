/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

