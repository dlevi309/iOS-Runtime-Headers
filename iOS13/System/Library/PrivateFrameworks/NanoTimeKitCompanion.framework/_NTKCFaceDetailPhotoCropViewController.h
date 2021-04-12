/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>

@class CAShapeLayer, NTKCCenteringScrollView, UIView, NTKDigitalTimeLabel, UIBarButtonItem, NTKCompanionCustomPhotosEditor, NTKFace, NTKDigitalTimeLabelStyle, NSString;

@interface _NTKCFaceDetailPhotoCropViewController : UIViewController <UIScrollViewDelegate> {

	CAShapeLayer* _reverseMask;
	NTKCCenteringScrollView* _scrollView;
	double _photoScale;
	CAShapeLayer* _mask;
	UIView* _timeContainer;
	NTKDigitalTimeLabel* _time;
	UIBarButtonItem* _deleteButton;
	UIBarButtonItem* _cancelButton;
	BOOL _cancelConfirmed;
	BOOL _deleteConfirmed;
	unsigned long long _index;
	NTKCompanionCustomPhotosEditor* _editor;
	NTKFace* _face;
	NTKDigitalTimeLabelStyle* _timeStyle;

}

@property (assign,nonatomic) unsigned long long index;                             //@synthesize index=_index - In the implementation block
@property (nonatomic,retain) NTKCompanionCustomPhotosEditor * editor;              //@synthesize editor=_editor - In the implementation block
@property (nonatomic,retain) NTKFace * face;                                       //@synthesize face=_face - In the implementation block
@property (nonatomic,retain) NTKDigitalTimeLabelStyle * timeStyle;                 //@synthesize timeStyle=_timeStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)index;
-(NTKDigitalTimeLabelStyle *)timeStyle;
-(void)setTimeStyle:(NTKDigitalTimeLabelStyle *)arg1 ;
-(void)setFace:(NTKFace *)arg1 ;
-(NTKFace *)face;
-(void)setIndex:(unsigned long long)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(NTKCompanionCustomPhotosEditor *)editor;
-(void)setEditor:(NTKCompanionCustomPhotosEditor *)arg1 ;
-(void)_cancelPressed;
-(void)_donePressed;
-(id)initWithIndex:(unsigned long long)arg1 inPhotosEditor:(id)arg2 forFace:(id)arg3 timeStyle:(id)arg4 ;
-(void)_deletePressed;
-(void)dismissWithSaving:(BOOL)arg1 ;
@end

