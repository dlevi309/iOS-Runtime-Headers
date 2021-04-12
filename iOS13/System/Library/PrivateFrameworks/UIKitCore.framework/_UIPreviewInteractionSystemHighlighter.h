/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIPreviewInteractionHighlighting.h>

@class UIView, NSString;

@interface _UIPreviewInteractionSystemHighlighter : NSObject <_UIPreviewInteractionHighlighting> {

	BOOL _blinderViewEnabled;
	UIView* _initialSnapshotView;
	UIView* _updatedSnapshotView;
	UIView* _blinderView;

}

@property (nonatomic,retain) UIView * initialSnapshotView;              //@synthesize initialSnapshotView=_initialSnapshotView - In the implementation block
@property (nonatomic,retain) UIView * updatedSnapshotView;              //@synthesize updatedSnapshotView=_updatedSnapshotView - In the implementation block
@property (assign,nonatomic) BOOL blinderViewEnabled;                   //@synthesize blinderViewEnabled=_blinderViewEnabled - In the implementation block
@property (nonatomic,retain) UIView * blinderView;                      //@synthesize blinderView=_blinderView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)highlightShouldBeginInContainerView:(id)arg1 presentationContainerView:(id)arg2 previewingContext:(id)arg3 ;
-(void)prepareHighlightWithPreviewingContext:(id)arg1 ;
-(void)finalizeHighlightForPreviewingContext:(id)arg1 ;
-(id)_newSnapshotViewForPreviewingContext:(id)arg1 afterScreenUpdates:(BOOL)arg2 ;
-(void)setInitialSnapshotView:(UIView *)arg1 ;
-(UIView *)initialSnapshotView;
-(void)setUpdatedSnapshotView:(UIView *)arg1 ;
-(UIView *)updatedSnapshotView;
-(BOOL)blinderViewEnabled;
-(void)setBlinderView:(UIView *)arg1 ;
-(UIView *)blinderView;
-(void)setBlinderViewEnabled:(BOOL)arg1 ;
@end

