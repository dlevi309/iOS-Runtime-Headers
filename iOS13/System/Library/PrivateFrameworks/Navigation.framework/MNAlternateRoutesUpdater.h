/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@class MNActiveRouteInfo, NSArray, NSMutableArray;

@interface MNAlternateRoutesUpdater : NSObject {

	MNActiveRouteInfo* _mainRoute;
	NSArray* _alternateRoutes;
	NSMutableArray* _trackedAlternateRoutes;

}

@property (nonatomic,readonly) NSArray * alternateRoutes; 
-(BOOL)updateForLocation:(id)arg1 ;
-(NSArray *)alternateRoutes;
-(BOOL)setAlternateRoutes:(id)arg1 forMainRoute:(id)arg2 ;
-(BOOL)updateForReroute:(id)arg1 rerouteReason:(unsigned long long)arg2 ;
-(id)alternateRouteForLocation:(id)arg1 ;
-(id)_findTrackedAlternateRouteMatching:(id)arg1 ;
@end

