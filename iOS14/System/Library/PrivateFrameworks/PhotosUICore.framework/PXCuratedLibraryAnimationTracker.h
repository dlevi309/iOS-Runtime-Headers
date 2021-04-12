/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSMutableSet;

@interface PXCuratedLibraryAnimationTracker : NSObject {

	NSMutableSet* _inFlightAnimations;

}

@property (nonatomic,readonly) NSMutableSet * inFlightAnimations;              //@synthesize inFlightAnimations=_inFlightAnimations - In the implementation block
+(void)scrollAnimationDidEndWithScrollContext:(SCD_Struct_PX76)arg1 ;
+(void)scrollAnimationDidBeginWithScrollContext:(SCD_Struct_PX76)arg1 ;
+(void)_scrollAnimationOccurredWithContext:(SCD_Struct_PX76)arg1 isBegin:(BOOL)arg2 ;
+(id)sharedTracker;
-(id)init;
-(void)zoomLevelTransitionDidBegin:(id)arg1 ;
-(void)zoomLevelTransitionDidEnd:(id)arg1 ;
-(void)zoomLevelTransitionPreparationDidBegin:(id)arg1 ;
-(void)_zoomLevelTransitionOccurred:(id)arg1 isPreparation:(BOOL)arg2 isBegin:(BOOL)arg3 ;
-(NSMutableSet *)inFlightAnimations;
-(void)zoomLevelTransitionsDidEndEarly;
@end

