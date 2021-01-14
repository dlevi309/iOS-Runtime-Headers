/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVOutputDeviceDiscoverySessionFactory.h>

@protocol AVFigRouteDiscovererFactory;
@class NSString;

@interface AVFigRouteDiscovererOutputDeviceDiscoverySessionFactory : NSObject <AVOutputDeviceDiscoverySessionFactory> {

	id<AVFigRouteDiscovererFactory> _routeDiscovererFactory;

}

@property (nonatomic,readonly) id<AVFigRouteDiscovererFactory> routeDiscovererFactory;              //@synthesize routeDiscovererFactory=_routeDiscovererFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<AVFigRouteDiscovererFactory>)routeDiscovererFactory;
-(id)outputDeviceDiscoverySessionOfClass:(Class)arg1 withDeviceFeatures:(unsigned long long)arg2 ;
-(id)initWithRouteDiscovererFactory:(id)arg1 ;
-(void)dealloc;
@end

