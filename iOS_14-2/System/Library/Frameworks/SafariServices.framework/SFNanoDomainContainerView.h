/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <UIKitCore/UIView.h>

@class _SFBrowserView;

@interface SFNanoDomainContainerView : UIView {

	double _maximumHeight;
	_SFBrowserView* _browserView;
	/*^block*/id _platterTapAction;

}

@property (assign,nonatomic) double maximumHeight;                             //@synthesize maximumHeight=_maximumHeight - In the implementation block
@property (assign,nonatomic,__weak) _SFBrowserView * browserView;              //@synthesize browserView=_browserView - In the implementation block
@property (nonatomic,copy) id platterTapAction;                                //@synthesize platterTapAction=_platterTapAction - In the implementation block
+(double)defaultHeight;
+(double)defaultTopOffset;
+(double)defaultHeightInsideQuickboard;
-(double)maximumHeight;
-(void)updateWithDomain:(id)arg1 isSecure:(BOOL)arg2 showsNotSecureAnotation:(BOOL)arg3 ;
-(id)platterTapAction;
-(void)setPlatterTapAction:(id)arg1 ;
-(void)setBrowserView:(_SFBrowserView *)arg1 ;
-(void)setMaximumHeight:(double)arg1 ;
-(_SFBrowserView *)browserView;
@end

