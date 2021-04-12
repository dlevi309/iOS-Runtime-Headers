/*
* Generated on Thursday, January 14, 2021 at 2:29:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/ControlCenter/Bundles/MediaControlsModule.bundle/MediaControlsModule
*/

#import <libobjc.A.dylib/CCUIContentModule.h>

@protocol MRUModuleViewController;
@class UIViewController, NSString;

@interface MediaControlsModule : NSObject <CCUIContentModule> {

	UIViewController*<MRUModuleViewController> _contentViewController;

}

@property (nonatomic,retain) UIViewController*<MRUModuleViewController> contentViewController;                                     //@synthesize contentViewController=_contentViewController - In the implementation block
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleBackgroundViewController> backgroundViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)routingContextUID;
-(id)init;
-(void)setContentViewController:(UIViewController*<MRUModuleViewController>)arg1 ;
-(void)setContentModuleContext:(id)arg1 ;
-(UIViewController*<MRUModuleViewController>)contentViewController;
-(void)setupControlCenterViewController;
-(void)setupEndpointsViewController;
@end

