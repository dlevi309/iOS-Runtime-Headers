/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, PXHUDView, PXHUDVisualization, NSString;

@interface PUPhotoEditReframeHUD : UIView {

	UIColor* _positiveColor;
	UIColor* _negativeColor;
	PXHUDView* _hudView;
	PXHUDVisualization* _detailVisualization;
	PXHUDVisualization* _pregatedVisualization;
	PXHUDVisualization* _overcaptureVisualization;
	PXHUDVisualization* _subjectsVisualization;
	PXHUDVisualization* _stitchedVisualization;
	PXHUDVisualization* _tripodVisualization;
	PXHUDVisualization* _buildingVisualization;
	PXHUDVisualization* _reframedVisualization;
	PXHUDVisualization* _resultReframeVisualization;
	PXHUDVisualization* _resultPerspectiveVisualization;
	PXHUDVisualization* _resultHorizonVisualization;

}

@property (nonatomic,retain) PXHUDView * hudView;                                              //@synthesize hudView=_hudView - In the implementation block
@property (nonatomic,retain) PXHUDVisualization * detailVisualization;                         //@synthesize detailVisualization=_detailVisualization - In the implementation block
@property (nonatomic,retain) PXHUDVisualization * pregatedVisualization;                       //@synthesize pregatedVisualization=_pregatedVisualization - In the implementation block
@property (nonatomic,retain) PXHUDVisualization * overcaptureVisualization;                    //@synthesize overcaptureVisualization=_overcaptureVisualization - In the implementation block
@property (nonatomic,retain) PXHUDVisualization * subjectsVisualization;                       //@synthesize subjectsVisualization=_subjectsVisualization - In the implementation block
@property (nonatomic,retain) PXHUDVisualization * stitchedVisualization;                       //@synthesize stitchedVisualization=_stitchedVisualization - In the implementation block
@property (nonatomic,retain) PXHUDVisualization * tripodVisualization;                         //@synthesize tripodVisualization=_tripodVisualization - In the implementation block
@property (nonatomic,retain) PXHUDVisualization * buildingVisualization;                       //@synthesize buildingVisualization=_buildingVisualization - In the implementation block
@property (nonatomic,retain) PXHUDVisualization * reframedVisualization;                       //@synthesize reframedVisualization=_reframedVisualization - In the implementation block
@property (nonatomic,retain) PXHUDVisualization * resultReframeVisualization;                  //@synthesize resultReframeVisualization=_resultReframeVisualization - In the implementation block
@property (nonatomic,retain) PXHUDVisualization * resultPerspectiveVisualization;              //@synthesize resultPerspectiveVisualization=_resultPerspectiveVisualization - In the implementation block
@property (nonatomic,retain) PXHUDVisualization * resultHorizonVisualization;                  //@synthesize resultHorizonVisualization=_resultHorizonVisualization - In the implementation block
@property (nonatomic,copy) NSString * detailText; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)showStatsForPhoto:(id)arg1 ;
-(PXHUDView *)hudView;
-(void)setDetailText:(NSString *)arg1 ;
-(void)setHudView:(PXHUDView *)arg1 ;
-(PXHUDVisualization *)detailVisualization;
-(void)setDetailVisualization:(PXHUDVisualization *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PXHUDVisualization *)pregatedVisualization;
-(void)setPregatedVisualization:(PXHUDVisualization *)arg1 ;
-(PXHUDVisualization *)overcaptureVisualization;
-(void)setOvercaptureVisualization:(PXHUDVisualization *)arg1 ;
-(PXHUDVisualization *)subjectsVisualization;
-(void)setSubjectsVisualization:(PXHUDVisualization *)arg1 ;
-(PXHUDVisualization *)stitchedVisualization;
-(void)setStitchedVisualization:(PXHUDVisualization *)arg1 ;
-(PXHUDVisualization *)tripodVisualization;
-(void)setTripodVisualization:(PXHUDVisualization *)arg1 ;
-(PXHUDVisualization *)buildingVisualization;
-(void)setBuildingVisualization:(PXHUDVisualization *)arg1 ;
-(PXHUDVisualization *)reframedVisualization;
-(void)setReframedVisualization:(PXHUDVisualization *)arg1 ;
-(PXHUDVisualization *)resultReframeVisualization;
-(void)setResultReframeVisualization:(PXHUDVisualization *)arg1 ;
-(NSString *)detailText;
-(PXHUDVisualization *)resultPerspectiveVisualization;
-(void)setResultPerspectiveVisualization:(PXHUDVisualization *)arg1 ;
-(PXHUDVisualization *)resultHorizonVisualization;
-(void)setResultHorizonVisualization:(PXHUDVisualization *)arg1 ;
@end

