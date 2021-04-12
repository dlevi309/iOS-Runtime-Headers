/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel;

@interface MCMoreDetailsContentView : UIView {

	UILabel* _title;
	UILabel* _subtitle1;
	UILabel* _subtitle2;

}
-(void)setPayload:(id)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setTitleText:(id)arg1 ;
-(id)_textForLabel:(id)arg1 value:(id)arg2 ;
-(void)setSubtitle1Text:(id)arg1 ;
-(void)setSubtitle2Text:(id)arg1 ;
-(void)setCertificate:(SecCertificateRef)arg1 ;
@end

