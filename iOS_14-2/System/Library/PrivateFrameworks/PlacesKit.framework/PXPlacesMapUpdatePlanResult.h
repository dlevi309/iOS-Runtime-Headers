/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
*/

@class NSSet;


@protocol PXPlacesMapUpdatePlanResult <NSObject>
@property (readonly) NSSet * annotationsToAddImmediately; 
@property (readonly) NSSet * annotationsToRemoveImmediately; 
@property (readonly) NSSet * annotationsToRemoveAfterAnimationHasStarted; 
@property (readonly) NSSet * annotationsToRemoveAfterAnimationHasEnded; 
@property (readonly) NSSet * annotationsToRedraw; 
@property (readonly) NSSet * annotationsWithUpdatedIndex; 
@property (readonly) NSSet * overlaysToAddImmediately; 
@property (readonly) NSSet * overlaysToRemoveImmediately; 
@required
-(NSSet *)annotationsToAddImmediately;
-(NSSet *)annotationsToRemoveImmediately;
-(NSSet *)annotationsToRemoveAfterAnimationHasStarted;
-(NSSet *)annotationsToRemoveAfterAnimationHasEnded;
-(NSSet *)annotationsToRedraw;
-(NSSet *)annotationsWithUpdatedIndex;
-(NSSet *)overlaysToAddImmediately;
-(NSSet *)overlaysToRemoveImmediately;

@end

