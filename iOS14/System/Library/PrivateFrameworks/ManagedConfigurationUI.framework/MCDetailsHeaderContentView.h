/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, MCUIGradientLabel, UIImageView, MCActionButton;

@interface MCDetailsHeaderContentView : UIView {

	UILabel* _displayNameLabel;
	UILabel* _organizationNameLabel;
	MCUIGradientLabel* _trustedLabel;
	UIImageView* _checkmarkView;
	MCActionButton* _actionButton;
	int _headerMode;
	BOOL _isNewPayload;
	BOOL _isTrusted;
	BOOL _isSigned;
	BOOL _isExpired;
	BOOL _hidesUntrustedLabel;
	BOOL _useTrustedNomenclature;
	id _headerDelegate;

}
+(void)_releaseGradients;
+(id)_greenGradient;
+(id)_redGradient;
+(id)_grayGradient;
-(id)_displayNameLabel;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(void)setDisplayName:(id)arg1 ;
-(void)setOrganizationName:(id)arg1 ;
-(void)setGradientColor:(int)arg1 ;
-(id)_scriptingInfo;
-(void)_actionButtonPressed:(id)arg1 ;
-(void)dealloc;
-(void)setIsSigned:(BOOL)arg1 ;
-(void)setIsTrusted:(BOOL)arg1 ;
-(void)setHidesUntrustedLabel:(BOOL)arg1 ;
-(void)setUseTrustedNomenclature:(BOOL)arg1 ;
-(void)hideActionButton;
-(id)_organizationNameLabel;
-(id)_trustedLabel;
-(id)_stringForSigned:(BOOL)arg1 andTrusted:(BOOL)arg2 ;
-(BOOL)_canFitTrustedStringForWidth:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 mode:(int)arg2 ;
-(void)setIsExpired:(BOOL)arg1 ;
-(id)_gradientForSigned:(BOOL)arg1 andTrusted:(BOOL)arg2 ;
-(void)showActionButton;
-(void)setActionToInstall;
-(void)setActionToRemove;
@end

