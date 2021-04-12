/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVFigRouteDiscovererFactory.h>

@class NSString;

@interface AVFigRemoteRouteDiscovererFactory : NSObject <AVFigRouteDiscovererFactory>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(OpaqueFigRouteDiscovererRef)createRouteDiscovererWithAllocator:(const CFAllocatorRef)arg1 options:(const CFDictionaryRef)arg2 ;
@end

