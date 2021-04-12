/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXBlueprintAnalyzer.h>

@protocol SXBlueprintAnalyzer <NSObject>
@required
-(void)analyzeBlueprint:(id)arg1 DOMObjectProvider:(id)arg2 onMarkerFound:(/*^block*/id)arg3 then:(/*^block*/id)arg4 onEndReached:(/*^block*/id)arg5;

@end


@class NSString;

@interface SXBlueprintAnalyzer : NSObject <SXBlueprintAnalyzer>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)markersFromBlueprint:(id)arg1 components:(id)arg2 DOMObjectProvider:(id)arg3 cursor:(id)arg4 ;
-(void)iterateMarkers:(id)arg1 onMarkerFound:(/*^block*/id)arg2 then:(/*^block*/id)arg3 onEndReached:(/*^block*/id)arg4 ;
-(BOOL)componentPlacedAboveComponentBlueprint:(id)arg1 blueprint:(id)arg2 ;
-(void)analyzeBlueprint:(id)arg1 DOMObjectProvider:(id)arg2 onMarkerFound:(/*^block*/id)arg3 then:(/*^block*/id)arg4 onEndReached:(/*^block*/id)arg5 ;
@end

