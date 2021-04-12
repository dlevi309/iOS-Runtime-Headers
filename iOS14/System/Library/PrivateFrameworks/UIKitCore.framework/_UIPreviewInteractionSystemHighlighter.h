/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIView *)blinderView;
-(void)prepareHighlightWithPreviewingContext:(id)arg1 ;
-(void)setInitialSnapshotView:(UIView *)arg1 ;
-(void)finalizeHighlightForPreviewingContext:(id)arg1 ;
-(UIView *)initialSnapshotView;
-(id)_newSnapshotViewForPreviewingContext:(id)arg1 afterScreenUpdates:(BOOL)arg2 ;
-(void)setUpdatedSnapshotView:(UIView *)arg1 ;
-(UIView *)updatedSnapshotView;
-(BOOL)blinderViewEnabled;
-(void)setBlinderView:(UIView *)arg1 ;
-(void)setBlinderViewEnabled:(BOOL)arg1 ;
@end

