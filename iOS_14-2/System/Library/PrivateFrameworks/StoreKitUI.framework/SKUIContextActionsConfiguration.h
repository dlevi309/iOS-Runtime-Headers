/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@class SKUIContextActionsPresentationSource, SKUIDialogTemplateViewElement;

@interface SKUIContextActionsConfiguration : NSObject {

	SKUIContextActionsPresentationSource* _presentationSource;
	SKUIDialogTemplateViewElement* _dialogTemplate;

}

@property (nonatomic,retain) SKUIDialogTemplateViewElement * dialogTemplate;                         //@synthesize dialogTemplate=_dialogTemplate - In the implementation block
@property (nonatomic,retain) SKUIContextActionsPresentationSource * presentationSource;              //@synthesize presentationSource=_presentationSource - In the implementation block
-(SKUIContextActionsPresentationSource *)presentationSource;
-(void)setPresentationSource:(SKUIContextActionsPresentationSource *)arg1 ;
-(id)contextActions;
-(SKUIDialogTemplateViewElement *)dialogTemplate;
-(id)initWithDialogTemplate:(id)arg1 ;
-(id)_resourceImageForImageElement:(id)arg1 ;
-(void)setDialogTemplate:(SKUIDialogTemplateViewElement *)arg1 ;
@end

