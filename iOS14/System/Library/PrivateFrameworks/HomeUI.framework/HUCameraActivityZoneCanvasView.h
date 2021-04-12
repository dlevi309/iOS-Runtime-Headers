/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol HUCameraActivityZoneCanvasDelegate;
@class NSMutableArray, UIImageView, HMPoint;

@interface HUCameraActivityZoneCanvasView : UIView {

	BOOL _displaysInclusionZones;
	BOOL _editingActivityZone;
	id<HUCameraActivityZoneCanvasDelegate> _delegate;
	NSMutableArray* _activityZones;
	NSMutableArray* _currentActivityZone;
	UIImageView* _canvasView;
	long long _currentTouchPointIndex;
	HMPoint* _startingTouchPoint;

}

@property (nonatomic,retain) NSMutableArray * currentActivityZone;                                //@synthesize currentActivityZone=_currentActivityZone - In the implementation block
@property (nonatomic,retain) UIImageView * canvasView;                                            //@synthesize canvasView=_canvasView - In the implementation block
@property (assign,nonatomic) long long currentTouchPointIndex;                                    //@synthesize currentTouchPointIndex=_currentTouchPointIndex - In the implementation block
@property (assign,getter=isEditingActivityZone,nonatomic) BOOL editingActivityZone;               //@synthesize editingActivityZone=_editingActivityZone - In the implementation block
@property (nonatomic,retain) HMPoint * startingTouchPoint;                                        //@synthesize startingTouchPoint=_startingTouchPoint - In the implementation block
@property (assign,nonatomic,__weak) id<HUCameraActivityZoneCanvasDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSMutableArray * activityZones;                                    //@synthesize activityZones=_activityZones - In the implementation block
@property (assign,nonatomic) BOOL displaysInclusionZones;                                         //@synthesize displaysInclusionZones=_displaysInclusionZones - In the implementation block
@property (nonatomic,readonly) BOOL isCreatingActivityZone; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didTap:(id)arg1 ;
-(id<HUCameraActivityZoneCanvasDelegate>)delegate;
-(void)drawRect:(CGRect)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)setDelegate:(id<HUCameraActivityZoneCanvasDelegate>)arg1 ;
-(void)didPan:(id)arg1 ;
-(NSMutableArray *)activityZones;
-(UIImageView *)canvasView;
-(void)setCanvasView:(UIImageView *)arg1 ;
-(BOOL)isCreatingActivityZone;
-(BOOL)displaysInclusionZones;
-(void)createActivityZone;
-(void)updateAfterVideoBoundsChange;
-(void)setDisplaysInclusionZones:(BOOL)arg1 ;
-(void)loadActivityZones:(id)arg1 ;
-(void)_drawTouchPoints;
-(CGPoint)_hmPointToCGPoint:(id)arg1 ;
-(BOOL)isEditingActivityZone;
-(void)_drawPolygonWithMaskPath:(id)arg1 ;
-(NSMutableArray *)currentActivityZone;
-(void)_addTouchpointAtPoint:(CGPoint)arg1 inContext:(CGContextRef)arg2 withRed:(double)arg3 green:(double)arg4 blue:(double)arg5 ;
-(BOOL)canCreateActivityZone;
-(void)_resetCanvasAndCurrentZone;
-(void)setEditingActivityZone:(BOOL)arg1 ;
-(void)setCurrentActivityZone:(NSMutableArray *)arg1 ;
-(void)_prepCurrentActivityZoneForDeselection;
-(void)_finishEditingCurrentActivityZone;
-(void)_displayMenuForActivityZone:(id)arg1 ;
-(void)clearActivityZone;
-(id)activityZoneContainingPoint:(CGPoint)arg1 ;
-(BOOL)currentZonesIntersectSegmentFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 ;
-(long long)currentTouchPointIndex;
-(HMPoint *)startingTouchPoint;
-(void)setCurrentTouchPointIndex:(long long)arg1 ;
-(void)setStartingTouchPoint:(HMPoint *)arg1 ;
-(id)selectedActivityZoneAtPoint:(CGPoint)arg1 ;
-(void)_editActivityZone:(id)arg1 ;
-(id)_hmPointForTapPoint:(CGPoint)arg1 ;
-(BOOL)currentZonesIntersectPoint:(CGPoint)arg1 ;
-(BOOL)isValidPointInView:(CGPoint)arg1 ;
-(CGPoint)_normalizedPointForPoint:(CGPoint)arg1 ;
-(void)_handleBeginForGesture:(id)arg1 ;
-(void)_handleChangeForGesture:(id)arg1 ;
-(void)_handleEndForGesture:(id)arg1 ;
-(void)preventAttemptToMovePoint;
@end

