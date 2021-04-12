/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <AppleMediaServicesUI/AMSUIWebModel.h>

@class AMSUIWebButtonModel;

@interface AMSUIWebConditionalButtonModel : AMSUIWebModel {

	BOOL _hideOnModal;
	BOOL _hideOnPush;
	AMSUIWebButtonModel* _button;

}

@property (nonatomic,retain) AMSUIWebButtonModel * button;              //@synthesize button=_button - In the implementation block
@property (assign,nonatomic) BOOL hideOnModal;                          //@synthesize hideOnModal=_hideOnModal - In the implementation block
@property (assign,nonatomic) BOOL hideOnPush;                           //@synthesize hideOnPush=_hideOnPush - In the implementation block
-(AMSUIWebButtonModel *)button;
-(void)setButton:(AMSUIWebButtonModel *)arg1 ;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(BOOL)hideOnPush;
-(BOOL)hideOnModal;
-(BOOL)matchesForContainer:(id)arg1 ;
-(void)setHideOnModal:(BOOL)arg1 ;
-(void)setHideOnPush:(BOOL)arg1 ;
@end

