/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/SKUIClientContextPreviewContainer.h>

@protocol SKUIClientContextPreviewContainer <JSExport>
@required
-(void)previewDocument:(id)arg1 :(id)arg2;

@end


@class SKUIClientContext, SKUIPreviewContainerViewController;

@interface SKUIClientContextPreviewContainer : IKJSObject <SKUIClientContextPreviewContainer> {

	SKUIClientContext* _clientContext;
	SKUIPreviewContainerViewController* _previewContainerViewController;

}
-(id)initWithAppContext:(id)arg1 clientContext:(id)arg2 previewContainerViewController:(id)arg3 ;
-(void)previewDocument:(id)arg1 :(id)arg2 ;
@end

