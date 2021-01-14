/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
*/

#import <libobjc.A.dylib/_WGParentDataSourceManager.h>

@class NSMutableDictionary, WGWidgetDataSourceManager, NSString;

@interface WGDataSourceManager : NSObject <_WGParentDataSourceManager> {

	BOOL _didBegin;
	NSMutableDictionary* _identifiersToWidgetChangeHandlers;
	WGWidgetDataSourceManager* _widgetDataSourceManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)requestSharedDataSourceManager:(/*^block*/id)arg1 ;
+(id)__sharedInstance;
-(void)childDataSourceManagerDataSourcesDidChange:(id)arg1 ;
-(void)_start:(/*^block*/id)arg1 ;
-(void)removeChangeHandlersWithIdentifier:(id)arg1 ;
-(void)_begin:(/*^block*/id)arg1 ;
-(void)addWidgetDataSourceChangeHandler:(/*^block*/id)arg1 forIdentifier:(id)arg2 ;
-(id)discoverAvailableWidgetsWithError:(id*)arg1 ;
-(void)_stop:(/*^block*/id)arg1 ;
@end

