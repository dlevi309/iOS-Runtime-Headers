/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
*/

#import <libobjc.A.dylib/WGWidgetVisibilityDelegate.h>
#import <libobjc.A.dylib/_WGDataSourceManager.h>

@protocol _WGParentDataSourceManager;
@class NSArray, WGWidgetDataSource, WGWidgetVisibilityManager, NSString;

@interface WGWidgetDataSourceManager : NSObject <WGWidgetVisibilityDelegate, _WGDataSourceManager> {

	WGWidgetDataSource* _widgetDataSource;
	WGWidgetVisibilityManager* _widgetVisbilityManager;
	id _plugInDiscoveryToken;
	BOOL _isPublishing;
	/*^block*/id _didStartBlock;
	id<_WGParentDataSourceManager> _parentDataSourceManager;

}

@property (setter=_setPlugInDiscoveryToken:,getter=_plugInDiscoveryToken,nonatomic,retain) id plugInDiscoveryToken;              //@synthesize plugInDiscoveryToken=_plugInDiscoveryToken - In the implementation block
@property (getter=_widgetVisbilityManager,nonatomic,retain) WGWidgetVisibilityManager * widgetVisbilityManager;                  //@synthesize widgetVisbilityManager=_widgetVisbilityManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<_WGParentDataSourceManager> parentDataSourceManager;                                             //@synthesize parentDataSourceManager=_parentDataSourceManager - In the implementation block
@property (nonatomic,readonly) NSArray * dataSources; 
+(id)_widgetExtensionsDiscoveryAttributes;
+(id)discoverAvailableWidgetsWithError:(id*)arg1 ;
-(id)init;
-(NSArray *)dataSources;
-(void)widgetVisibilityDidChange;
-(void)_beginContinuousPlugInDiscovery;
-(void)_endContinuousPlugInDiscovery;
-(void)_updatePublishedWidgetExtensions;
-(BOOL)_shouldPublishWidgetExtension:(id)arg1 ;
-(void)_updateDataSourceWithExtension:(id)arg1 ;
-(void)_revokeExtensionWithIdentifier:(id)arg1 ;
-(void)_updatePublishedWidgetExtensions:(id)arg1 ;
-(id)_widgetVisbilityManager;
-(void)_setPlugInDiscoveryToken:(id)arg1 ;
-(void)_start:(/*^block*/id)arg1 ;
-(void)_stop:(/*^block*/id)arg1 ;
-(id<_WGParentDataSourceManager>)parentDataSourceManager;
-(void)setParentDataSourceManager:(id<_WGParentDataSourceManager>)arg1 ;
-(id)_plugInDiscoveryToken;
-(void)setWidgetVisbilityManager:(WGWidgetVisibilityManager *)arg1 ;
@end

