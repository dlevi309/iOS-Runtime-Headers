/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)renderContents;
-(void)presentComponentWithChanges:(SCD_Struct_SX14)arg1 ;
-(UIView *)coverView;
-(void)renderIssueCover;
-(void)setCoverView:(UIView *)arg1 ;
-(id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 viewProvider:(id)arg5 ;
@end

