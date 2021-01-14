/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
*/

#import <UIKitCore/UIAlertController.h>
#import <libobjc.A.dylib/WFNetworkView.h>

@protocol WFErrorProviderContext;
@interface WFErrorAlertController : UIAlertController <WFNetworkView> {

	id<WFErrorProviderContext> _context;

}

@property (nonatomic,retain) id<WFErrorProviderContext> context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) BOOL wantsModalPresentation; 
+(id)errorAlertControllerWithContext:(id)arg1 ;
-(id<WFErrorProviderContext>)context;
-(BOOL)_canShowWhileLocked;
-(void)setContext:(id<WFErrorProviderContext>)arg1 ;
@end

