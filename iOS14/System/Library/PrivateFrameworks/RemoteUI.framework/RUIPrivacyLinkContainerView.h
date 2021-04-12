/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
*/

#import <UIKitCore/UIView.h>
#import <RemoteUI/RemoteUITableFooter.h>

@class NSDictionary, OBPrivacyLinkController, NSString;

@interface RUIPrivacyLinkContainerView : UIView <RemoteUITableFooter> {

	NSDictionary* _attributes;
	OBPrivacyLinkController* _linkController;

}

@property (readonly) OBPrivacyLinkController * linkController;              //@synthesize linkController=_linkController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAttributes:(id)arg1 ;
-(void)layoutSubviews;
-(void)configureInPage:(id)arg1 ;
-(double)footerHeightForWidth:(double)arg1 inView:(id)arg2 ;
-(OBPrivacyLinkController *)linkController;
@end

