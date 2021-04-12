/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIViewElement.h>

@class NSString, NSURL, SKUIImageViewElement, SKUILabelViewElement, SKUIURLViewElement;

@interface SKUIShareSheetActivityViewElement : SKUIViewElement {

	NSString* _activityType;
	NSURL* _contentSourceURL;

}

@property (nonatomic,readonly) NSString * activityType;                     //@synthesize activityType=_activityType - In the implementation block
@property (nonatomic,readonly) NSURL * contentSourceURL;                    //@synthesize contentSourceURL=_contentSourceURL - In the implementation block
@property (nonatomic,readonly) SKUIImageViewElement * image; 
@property (nonatomic,readonly) SKUILabelViewElement * message; 
@property (nonatomic,readonly) SKUILabelViewElement * title; 
@property (nonatomic,readonly) SKUIURLViewElement * URL; 
-(SKUIURLViewElement *)URL;
-(SKUILabelViewElement *)title;
-(NSString *)activityType;
-(SKUIImageViewElement *)image;
-(SKUILabelViewElement *)message;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(NSURL *)contentSourceURL;
@end

