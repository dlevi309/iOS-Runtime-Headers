/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUButtonCell.h>
#import <libobjc.A.dylib/HUCellProtocol.h>

@class UIActivityIndicatorView, NSString, HFItem;

@interface HUSpinnerButtonCell : HUButtonCell <HUCellProtocol> {

	BOOL _showSpinner;
	BOOL _useFullWidthSeparator;
	UIActivityIndicatorView* _spinner;

}

@property (nonatomic,retain) UIActivityIndicatorView * spinner;                                //@synthesize spinner=_spinner - In the implementation block
@property (assign,nonatomic) BOOL showSpinner;                                                 //@synthesize showSpinner=_showSpinner - In the implementation block
@property (assign,nonatomic) BOOL useFullWidthSeparator;                                       //@synthesize useFullWidthSeparator=_useFullWidthSeparator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HFItem * item; 
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate; 
-(void)prepareForReuse;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(CGRect)_separatorFrame;
-(BOOL)showSpinner;
-(void)setShowSpinner:(BOOL)arg1 ;
-(void)setUseFullWidthSeparator:(BOOL)arg1 ;
-(void)createSpinner;
-(BOOL)useFullWidthSeparator;
@end

