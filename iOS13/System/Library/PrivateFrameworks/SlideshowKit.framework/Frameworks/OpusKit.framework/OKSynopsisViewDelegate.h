/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/


@protocol OKSynopsisViewDelegate <NSObject>
@optional
-(void)synopsisViewDidEnd:(id)arg1;
-(void)synopsisViewDidBegin:(id)arg1;
-(void)synopsisViewUpdated:(id)arg1 withProgress:(double)arg2;
-(BOOL)shouldShowSynopsisView;
-(void)synopsisViewWillBegin:(id)arg1;

@required
-(id)visibleWidgets;
-(void)synopsisView:(id)arg1 didSelectItem:(id)arg2;

@end

