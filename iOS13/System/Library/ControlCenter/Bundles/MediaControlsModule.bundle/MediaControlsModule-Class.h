/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/ControlCenter/Bundles/MediaControlsModule.bundle/MediaControlsModule
*/

#import <libobjc.A.dylib/CCUIContentModule.h>

@class MediaControlsEndpointsViewController, NSString;

@interface MediaControlsModule : NSObject <CCUIContentModule> {

	MediaControlsEndpointsViewController* _contentViewController;

}

@property (nonatomic,retain) MediaControlsEndpointsViewController * contentViewController;                                         //@synthesize contentViewController=_contentViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleBackgroundViewController> backgroundViewController; 
-(id)init;
-(void)setContentViewController:(MediaControlsEndpointsViewController *)arg1 ;
-(MediaControlsEndpointsViewController *)contentViewController;
-(void)setContentModuleContext:(id)arg1 ;
@end

