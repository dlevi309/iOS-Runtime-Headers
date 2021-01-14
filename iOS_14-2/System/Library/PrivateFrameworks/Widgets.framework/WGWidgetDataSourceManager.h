/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)discoverAvailableWidgetsWithError:(id*)arg1 ;
+(id)_widgetExtensionsDiscoveryAttributes;
-(NSArray *)dataSources;
-(id)init;
-(void)_endContinuousPlugInDiscovery;
-(id)_plugInDiscoveryToken;
-(void)_start:(/*^block*/id)arg1 ;
-(void)_revokeExtensionWithIdentifier:(id)arg1 ;
-(void)setWidgetVisbilityManager:(WGWidgetVisibilityManager *)arg1 ;
-(id)_widgetVisbilityManager;
-(void)_beginContinuousPlugInDiscovery;
-(void)_updatePublishedWidgetExtensions;
-(void)setParentDataSourceManager:(id<_WGParentDataSourceManager>)arg1 ;
-(void)widgetVisibilityDidChange;
-(id<_WGParentDataSourceManager>)parentDataSourceManager;
-(void)_stop:(/*^block*/id)arg1 ;
-(void)_updatePublishedWidgetExtensions:(id)arg1 ;
-(void)_updateDataSourceWithExtension:(id)arg1 ;
-(BOOL)_shouldPublishWidgetExtension:(id)arg1 ;
-(void)_setPlugInDiscoveryToken:(id)arg1 ;
@end

