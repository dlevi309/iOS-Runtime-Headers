/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@class PKTextInputDebugSharpenerLog, UIViewController;

@interface PKPaletteTapToRadarConfiguration : NSObject {

	PKTextInputDebugSharpenerLog* _debugSharpenerLog;
	UIViewController* _presentationViewController;

}

@property (nonatomic,retain) PKTextInputDebugSharpenerLog * debugSharpenerLog;              //@synthesize debugSharpenerLog=_debugSharpenerLog - In the implementation block
@property (nonatomic,retain) UIViewController * presentationViewController;                 //@synthesize presentationViewController=_presentationViewController - In the implementation block
-(UIViewController *)presentationViewController;
-(void)setPresentationViewController:(UIViewController *)arg1 ;
-(void)setDebugSharpenerLog:(PKTextInputDebugSharpenerLog *)arg1 ;
-(PKTextInputDebugSharpenerLog *)debugSharpenerLog;
@end

