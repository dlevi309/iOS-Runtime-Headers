/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)analyzeBlueprint:(id)arg1 DOMObjectProvider:(id)arg2 onMarkerFound:(/*^block*/id)arg3 then:(/*^block*/id)arg4 onEndReached:(/*^block*/id)arg5 ;
-(BOOL)componentPlacedAboveComponentBlueprint:(id)arg1 blueprint:(id)arg2 ;
-(void)iterateMarkers:(id)arg1 onMarkerFound:(/*^block*/id)arg2 then:(/*^block*/id)arg3 onEndReached:(/*^block*/id)arg4 ;
-(id)markersFromBlueprint:(id)arg1 components:(id)arg2 DOMObjectProvider:(id)arg3 cursor:(id)arg4 ;
@end

