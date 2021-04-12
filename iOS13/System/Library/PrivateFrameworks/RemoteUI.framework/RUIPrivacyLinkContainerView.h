/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)layoutSubviews;
-(id)initWithAttributes:(id)arg1 ;
-(void)configureInPage:(id)arg1 ;
-(double)footerHeightForWidth:(double)arg1 inView:(id)arg2 ;
-(OBPrivacyLinkController *)linkController;
@end

