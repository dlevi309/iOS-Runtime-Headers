/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)commonInit;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)updateConstraints;
-(void)updateFonts;
-(void)updateConstraintsConstants;
-(void)loadConstraints;
-(void)unloadConstraints;
-(void)setConstraintsLoaded:(BOOL)arg1 ;
-(BOOL)isConstraintsLoaded;
-(BOOL)isAccessiblityConstraintsEnabled;
-(void)setAccessiblityConstraintsEnabled:(BOOL)arg1 ;
@end

