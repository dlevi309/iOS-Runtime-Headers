/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVFigRouteDiscovererFactory.h>

@class NSString;

@interface AVFigRemoteRouteDiscovererFactory : NSObject <AVFigRouteDiscovererFactory>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(OpaqueFigRouteDiscovererRef)createRouteDiscovererWithAllocator:(const CFAllocatorRef)arg1 options:(const CFDictionaryRef)arg2 ;
@end

