/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXMediaComponentView.h>
#import <libobjc.A.dylib/SXDragManagerDataSource.h>

@class SXDragManager;

@interface SXGalleryComponentView : SXMediaComponentView <SXDragManagerDataSource> {

	SXDragManager* _dragManager;

}

@property (nonatomic,retain) SXDragManager * dragManager;              //@synthesize dragManager=_dragManager - In the implementation block
-(SXDragManager *)dragManager;
-(id)hostingView;
-(id)imageViewForLocation:(CGPoint)arg1 ;
-(id)viewForDragManager:(id)arg1 ;
-(id)dragManager:(id)arg1 dragableAtLocation:(CGPoint)arg2 ;
-(id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 analyticsReporting:(id)arg5 appStateMonitor:(id)arg6 mediaSharingPolicyProvider:(id)arg7 ;
-(void)forceImageViewFullscreen:(id)arg1 ;
-(void)setDragManager:(SXDragManager *)arg1 ;
@end

