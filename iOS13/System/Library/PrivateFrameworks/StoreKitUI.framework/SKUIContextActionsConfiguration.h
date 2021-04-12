/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@class SKUIContextActionsPresentationSource, SKUIDialogTemplateViewElement;

@interface SKUIContextActionsConfiguration : NSObject {

	SKUIContextActionsPresentationSource* _presentationSource;
	SKUIDialogTemplateViewElement* _dialogTemplate;

}

@property (nonatomic,retain) SKUIDialogTemplateViewElement * dialogTemplate;                         //@synthesize dialogTemplate=_dialogTemplate - In the implementation block
@property (nonatomic,retain) SKUIContextActionsPresentationSource * presentationSource;              //@synthesize presentationSource=_presentationSource - In the implementation block
-(void)setPresentationSource:(SKUIContextActionsPresentationSource *)arg1 ;
-(SKUIContextActionsPresentationSource *)presentationSource;
-(id)contextActions;
-(SKUIDialogTemplateViewElement *)dialogTemplate;
-(id)initWithDialogTemplate:(id)arg1 ;
-(id)_resourceImageForImageElement:(id)arg1 ;
-(void)setDialogTemplate:(SKUIDialogTemplateViewElement *)arg1 ;
@end

