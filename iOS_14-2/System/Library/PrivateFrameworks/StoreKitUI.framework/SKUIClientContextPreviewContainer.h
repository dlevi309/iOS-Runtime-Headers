/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

