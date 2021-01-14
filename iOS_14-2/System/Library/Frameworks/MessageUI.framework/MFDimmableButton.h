/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <UIKitCore/UIButton.h>

@interface MFDimmableButton : UIButton {

	BOOL _hidesWhenDimmedIfNotSelected;
	BOOL _dimmed;
	BOOL _stickyHiddenValue;

}

@property (assign,nonatomic) BOOL stickyHiddenValue;                               //@synthesize stickyHiddenValue=_stickyHiddenValue - In the implementation block
@property (nonatomic,readonly) unsigned long long autohidePreference; 
@property (assign,nonatomic) BOOL hidesWhenDimmedIfNotSelected;                    //@synthesize hidesWhenDimmedIfNotSelected=_hidesWhenDimmedIfNotSelected - In the implementation block
@property (assign,getter=isDimmed,nonatomic) BOOL dimmed;                          //@synthesize dimmed=_dimmed - In the implementation block
-(void)setHidden:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setHidesWhenDimmedIfNotSelected:(BOOL)arg1 ;
-(void)_updateDimmedHidingIfNecessary;
-(void)_setHidden:(BOOL)arg1 external:(BOOL)arg2 ;
-(void)setStickyHiddenValue:(BOOL)arg1 ;
-(unsigned long long)autohidePreference;
-(BOOL)hidesWhenDimmedIfNotSelected;
-(BOOL)stickyHiddenValue;
-(unsigned long long)state;
-(BOOL)isDimmed;
-(void)setDimmed:(BOOL)arg1 ;
@end

