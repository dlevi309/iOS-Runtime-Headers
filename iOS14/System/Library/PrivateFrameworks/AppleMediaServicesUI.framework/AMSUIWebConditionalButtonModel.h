/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <libobjc.A.dylib/AMSUIWebModelInterface.h>

@class AMSUIWebButtonModel, NSString;

@interface AMSUIWebConditionalButtonModel : NSObject <AMSUIWebModelInterface> {

	BOOL _hideOnModal;
	BOOL _hideOnPush;
	AMSUIWebButtonModel* _button;

}

@property (nonatomic,retain) AMSUIWebButtonModel * button;              //@synthesize button=_button - In the implementation block
@property (assign,nonatomic) BOOL hideOnModal;                          //@synthesize hideOnModal=_hideOnModal - In the implementation block
@property (assign,nonatomic) BOOL hideOnPush;                           //@synthesize hideOnPush=_hideOnPush - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AMSUIWebButtonModel *)button;
-(void)setButton:(AMSUIWebButtonModel *)arg1 ;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(BOOL)hideOnPush;
-(BOOL)hideOnModal;
-(BOOL)matchesForContainer:(id)arg1 ;
-(void)setHideOnModal:(BOOL)arg1 ;
-(void)setHideOnPush:(BOOL)arg1 ;
@end

