/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/DeveloperToolsSupport.PreviewDisplaying.h>

@class NSArray, NTKFaceViewController, UIView, NSString;

@interface NTKUVPreviewComplicationViewController : UIViewController <DeveloperToolsSupport.PreviewDisplaying> {

	BOOL _displayingLivePreview;
	NSArray* _previewTimeline;
	NTKFaceViewController* _faceVC;
	UIView* _containerView;

}

@property (nonatomic,copy) NSArray * previewTimeline;                             //@synthesize previewTimeline=_previewTimeline - In the implementation block
@property (nonatomic,retain) NTKFaceViewController * faceVC;                      //@synthesize faceVC=_faceVC - In the implementation block
@property (nonatomic,retain) UIView * containerView;                              //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,readonly) NSArray * timeline; 
@property (assign,nonatomic) BOOL displayingLivePreview;                          //@synthesize displayingLivePreview=_displayingLivePreview - In the implementation block
@property (nonatomic,readonly) BOOL wantsCustomPreviewSize; 
@property (nonatomic,readonly) double customPreviewSizeCornerRadius; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setContainerView:(UIView *)arg1 ;
-(NTKFaceViewController *)faceVC;
-(CGSize)preferredContentSize;
-(UIView *)containerView;
-(void)viewDidLoad;
-(NSArray *)timeline;
-(void)viewDidLayoutSubviews;
-(void)setFaceVC:(NTKFaceViewController *)arg1 ;
-(void)setPreviewTimeline:(NSArray *)arg1 ;
-(void)_updateFaceForTimeline;
-(void)_updateLiveness:(id)arg1 ;
-(NSArray *)previewTimeline;
-(id)_faceViewControllerWithFace:(id)arg1 ;
-(BOOL)displayingLivePreview;
-(void)setDisplayingLivePreview:(BOOL)arg1 ;
-(BOOL)wantsCustomPreviewSize;
-(id)initWithTimeline:(id)arg1 ;
@end

