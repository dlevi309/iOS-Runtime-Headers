/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)setDisplayName:(id)arg1 ;
-(void)layoutSubviews;
-(id)_scriptingInfo;
-(void)_actionButtonPressed:(id)arg1 ;
-(void)setOrganizationName:(id)arg1 ;
-(void)setGradientColor:(int)arg1 ;
-(id)_trustedLabel;
-(void)setIsTrusted:(BOOL)arg1 ;
-(void)setIsSigned:(BOOL)arg1 ;
-(void)setHidesUntrustedLabel:(BOOL)arg1 ;
-(void)setUseTrustedNomenclature:(BOOL)arg1 ;
-(void)hideActionButton;
-(void)showActionButton;
-(void)setActionToRemove;
-(id)_displayNameLabel;
-(id)_organizationNameLabel;
-(id)_stringForSigned:(BOOL)arg1 andTrusted:(BOOL)arg2 ;
-(BOOL)_canFitTrustedStringForWidth:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 mode:(int)arg2 ;
-(void)setIsExpired:(BOOL)arg1 ;
-(id)_gradientForSigned:(BOOL)arg1 andTrusted:(BOOL)arg2 ;
-(void)setActionToInstall;
@end

