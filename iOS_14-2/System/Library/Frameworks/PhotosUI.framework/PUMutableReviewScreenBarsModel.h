/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

@class NSDictionary, UIView;


@protocol PUMutableReviewScreenBarsModel
@property (nonatomic,copy) NSDictionary * availableItemsByIdentifier; 
@property (nonatomic,retain) UIView * accessoryView; 
@property (assign,nonatomic) BOOL shouldPlaceScrubberInScrubberBar; 
@property (assign,getter=isTransitioningWithCamera,nonatomic) BOOL transitioningWithCamera; 
@property (assign,nonatomic) BOOL useVerticalControlLayout; 
@property (assign,nonatomic) CGPoint controlCenterAlignmentPoint; 
@required
-(void)setUseVerticalControlLayout:(BOOL)arg1;
-(UIView *)accessoryView;
-(void)setControlCenterAlignmentPoint:(CGPoint)arg1 forceLayout:(BOOL)arg2;
-(NSDictionary *)availableItemsByIdentifier;
-(void)setTransitioningWithCamera:(BOOL)arg1;
-(void)setControlCenterAlignmentPoint:(CGPoint)arg1;
-(void)setAccessoryView:(id)arg1;
-(BOOL)useVerticalControlLayout;
-(CGPoint)controlCenterAlignmentPoint;
-(BOOL)isTransitioningWithCamera;
-(BOOL)shouldPlaceScrubberInScrubberBar;
-(void)setAvailableItemsByIdentifier:(id)arg1;
-(void)setShouldPlaceScrubberInScrubberBar:(BOOL)arg1;

@end

