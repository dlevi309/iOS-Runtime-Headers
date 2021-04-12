/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PUMutableReviewScreenBarsModel.h>

@class NSDictionary, UIView, NSSet;

@interface PUReviewScreenBarsModel : PXObservable <PUMutableReviewScreenBarsModel> {

	BOOL _shouldPlaceScrubberInScrubberBar;
	BOOL _transitioningWithCamera;
	BOOL _lastControlAlignmentChangeForcedLayout;
	BOOL _useVerticalControlLayout;
	BOOL __needsUpdateAvailableControls;
	NSDictionary* _availableItemsByIdentifier;
	NSSet* _availableControls;
	NSSet* _enabledControls;
	UIView* _accessoryView;
	CGPoint _controlCenterAlignmentPoint;

}

@property (assign,setter=_setNeedsUpdateAvailableControls:,nonatomic) BOOL _needsUpdateAvailableControls;              //@synthesize _needsUpdateAvailableControls=__needsUpdateAvailableControls - In the implementation block
@property (setter=_setAvailableControls:,nonatomic,retain) NSSet * availableControls;                                  //@synthesize availableControls=_availableControls - In the implementation block
@property (setter=_setEnabledControls:,nonatomic,retain) NSSet * enabledControls;                                      //@synthesize enabledControls=_enabledControls - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * availableItemsByIdentifier;                                         //@synthesize availableItemsByIdentifier=_availableItemsByIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL shouldPlaceScrubberInScrubberBar;                                                  //@synthesize shouldPlaceScrubberInScrubberBar=_shouldPlaceScrubberInScrubberBar - In the implementation block
@property (nonatomic,readonly) UIView * accessoryView;                                                                 //@synthesize accessoryView=_accessoryView - In the implementation block
@property (getter=isTransitioningWithCamera,nonatomic,readonly) BOOL transitioningWithCamera;                          //@synthesize transitioningWithCamera=_transitioningWithCamera - In the implementation block
@property (nonatomic,readonly) CGPoint controlCenterAlignmentPoint;                                                    //@synthesize controlCenterAlignmentPoint=_controlCenterAlignmentPoint - In the implementation block
@property (nonatomic,readonly) BOOL lastControlAlignmentChangeForcedLayout;                                            //@synthesize lastControlAlignmentChangeForcedLayout=_lastControlAlignmentChangeForcedLayout - In the implementation block
@property (nonatomic,readonly) BOOL useVerticalControlLayout;                                                          //@synthesize useVerticalControlLayout=_useVerticalControlLayout - In the implementation block
-(void)setUseVerticalControlLayout:(BOOL)arg1 ;
-(UIView *)accessoryView;
-(void)setControlCenterAlignmentPoint:(CGPoint)arg1 forceLayout:(BOOL)arg2 ;
-(NSDictionary *)availableItemsByIdentifier;
-(void)setTransitioningWithCamera:(BOOL)arg1 ;
-(void)setControlCenterAlignmentPoint:(CGPoint)arg1 ;
-(void)invokeCallbackForBarButtonItemWithIdentifier:(long long)arg1 ;
-(void)_updateAvailableControls;
-(void)_setAvailableControls:(id)arg1 ;
-(void)_setEnabledControls:(id)arg1 ;
-(BOOL)lastControlAlignmentChangeForcedLayout;
-(BOOL)_needsUpdateAvailableControls;
-(void)_setNeedsUpdateAvailableControls:(BOOL)arg1 ;
-(void)setAccessoryView:(UIView *)arg1 ;
-(NSSet *)enabledControls;
-(BOOL)useVerticalControlLayout;
-(CGPoint)controlCenterAlignmentPoint;
-(BOOL)isTransitioningWithCamera;
-(NSSet *)availableControls;
-(BOOL)shouldPlaceScrubberInScrubberBar;
-(id)mutableChangeObject;
-(void)setAvailableItemsByIdentifier:(NSDictionary *)arg1 ;
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)setShouldPlaceScrubberInScrubberBar:(BOOL)arg1 ;
@end

