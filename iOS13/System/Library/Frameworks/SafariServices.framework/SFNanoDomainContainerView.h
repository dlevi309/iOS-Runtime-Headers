/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <UIKitCore/UIView.h>

@class _SFBrowserView;

@interface SFNanoDomainContainerView : UIView {

	double _maximumHeight;
	_SFBrowserView* _browserView;

}

@property (assign,nonatomic) double maximumHeight;                             //@synthesize maximumHeight=_maximumHeight - In the implementation block
@property (assign,nonatomic,__weak) _SFBrowserView * browserView;              //@synthesize browserView=_browserView - In the implementation block
+(double)defaultHeight;
+(double)defaultTopOffset;
+(double)defaultHeightInsideQuickboard;
-(_SFBrowserView *)browserView;
-(void)setMaximumHeight:(double)arg1 ;
-(double)maximumHeight;
-(void)updateWithDomain:(id)arg1 isSecure:(BOOL)arg2 showsNotSecureAnotation:(BOOL)arg3 ;
-(void)setBrowserView:(_SFBrowserView *)arg1 ;
@end

