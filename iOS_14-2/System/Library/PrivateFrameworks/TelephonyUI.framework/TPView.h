/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKitCore/UIView.h>

@interface TPView : UIView {

	BOOL _accessiblityConstraintsEnabled;
	BOOL _constraintsLoaded;

}

@property (assign,getter=isAccessiblityConstraintsEnabled,nonatomic) BOOL accessiblityConstraintsEnabled;              //@synthesize accessiblityConstraintsEnabled=_accessiblityConstraintsEnabled - In the implementation block
@property (assign,getter=isConstraintsLoaded,nonatomic) BOOL constraintsLoaded;                                        //@synthesize constraintsLoaded=_constraintsLoaded - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(void)loadConstraints;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(void)updateConstraintsConstants;
-(void)commonInit;
-(BOOL)isAccessiblityConstraintsEnabled;
-(void)updateConstraints;
-(void)updateFonts;
-(void)setAccessiblityConstraintsEnabled:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isConstraintsLoaded;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setConstraintsLoaded:(BOOL)arg1 ;
-(void)unloadConstraints;
@end

