/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
*/

#import <libobjc.A.dylib/PXPlacesMapUpdatePlanResult.h>

@class NSSet, NSMutableSet, NSString;

@interface PXPlacesMapUpdatePlanResultImpl : NSObject <PXPlacesMapUpdatePlanResult> {

	NSMutableSet* _annotationsToAddImmediately;
	NSMutableSet* _annotationsToRemoveImmediately;
	NSMutableSet* _annotationsToRemoveAfterAnimationHasStarted;
	NSMutableSet* _annotationsToRemoveAfterAnimationHasEnded;
	NSMutableSet* _annotationsToRedraw;
	NSMutableSet* _annotationsWithUpdatedIndex;
	NSMutableSet* _overlaysToAddImmediately;
	NSMutableSet* _overlaysToRemoveImmediately;

}

@property (readonly) NSMutableSet * annotationsToAddImmediately;                              //@synthesize annotationsToAddImmediately=_annotationsToAddImmediately - In the implementation block
@property (readonly) NSMutableSet * annotationsToRemoveImmediately;                           //@synthesize annotationsToRemoveImmediately=_annotationsToRemoveImmediately - In the implementation block
@property (readonly) NSMutableSet * annotationsToRemoveAfterAnimationHasStarted;              //@synthesize annotationsToRemoveAfterAnimationHasStarted=_annotationsToRemoveAfterAnimationHasStarted - In the implementation block
@property (readonly) NSMutableSet * annotationsToRemoveAfterAnimationHasEnded;                //@synthesize annotationsToRemoveAfterAnimationHasEnded=_annotationsToRemoveAfterAnimationHasEnded - In the implementation block
@property (readonly) NSMutableSet * annotationsToRedraw;                                      //@synthesize annotationsToRedraw=_annotationsToRedraw - In the implementation block
@property (readonly) NSMutableSet * annotationsWithUpdatedIndex;                              //@synthesize annotationsWithUpdatedIndex=_annotationsWithUpdatedIndex - In the implementation block
@property (readonly) NSMutableSet * overlaysToAddImmediately;                                 //@synthesize overlaysToAddImmediately=_overlaysToAddImmediately - In the implementation block
@property (readonly) NSMutableSet * overlaysToRemoveImmediately;                              //@synthesize overlaysToRemoveImmediately=_overlaysToRemoveImmediately - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(NSMutableSet *)annotationsToAddImmediately;
-(NSMutableSet *)annotationsToRemoveImmediately;
-(NSMutableSet *)annotationsToRemoveAfterAnimationHasStarted;
-(NSMutableSet *)annotationsToRemoveAfterAnimationHasEnded;
-(NSMutableSet *)annotationsToRedraw;
-(NSMutableSet *)annotationsWithUpdatedIndex;
-(NSMutableSet *)overlaysToAddImmediately;
-(NSMutableSet *)overlaysToRemoveImmediately;
@end

