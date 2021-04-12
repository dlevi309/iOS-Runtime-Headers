/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXComponentView.h>

@protocol SXIssueCoverViewProvider;
@class UIView;

@interface SXIssueCoverComponentView : SXComponentView {

	id<SXIssueCoverViewProvider> _viewProvider;
	UIView* _coverView;

}

@property (nonatomic,readonly) id<SXIssueCoverViewProvider> viewProvider;              //@synthesize viewProvider=_viewProvider - In the implementation block
@property (nonatomic,retain) UIView * coverView;                                       //@synthesize coverView=_coverView - In the implementation block
-(void)discardContents;
-(id<SXIssueCoverViewProvider>)viewProvider;
-(void)presentComponentWithChanges:(SCD_Struct_SX14)arg1 ;
-(UIView *)coverView;
-(void)renderIssueCover;
-(void)renderContents;
-(void)setCoverView:(UIView *)arg1 ;
-(id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 viewProvider:(id)arg5 ;
@end

