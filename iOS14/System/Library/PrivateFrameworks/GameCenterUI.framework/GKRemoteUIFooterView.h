/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/RemoteUITableFooter.h>

@class GKLabel, NSString;

@interface GKRemoteUIFooterView : UIView <RemoteUITableFooter> {

	BOOL _shouldApplyGameCenterTheme;
	int _layoutStyle;
	GKLabel* _textLabel;
	double _leftMargin;
	double _rightMargin;
	double _bottomMargin;
	double _paragraphMargin;

}

@property (nonatomic,retain) GKLabel * textLabel;                          //@synthesize textLabel=_textLabel - In the implementation block
@property (assign,nonatomic) double leftMargin;                            //@synthesize leftMargin=_leftMargin - In the implementation block
@property (assign,nonatomic) double rightMargin;                           //@synthesize rightMargin=_rightMargin - In the implementation block
@property (assign,nonatomic) double bottomMargin;                          //@synthesize bottomMargin=_bottomMargin - In the implementation block
@property (assign,nonatomic) double paragraphMargin;                       //@synthesize paragraphMargin=_paragraphMargin - In the implementation block
@property (assign,nonatomic) BOOL shouldApplyGameCenterTheme;              //@synthesize shouldApplyGameCenterTheme=_shouldApplyGameCenterTheme - In the implementation block
@property (assign,nonatomic) int layoutStyle;                              //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLayoutStyle:(int)arg1 ;
-(void)setLeftMargin:(double)arg1 ;
-(void)setBottomMargin:(double)arg1 ;
-(int)layoutStyle;
-(id)initWithAttributes:(id)arg1 ;
-(double)leftMargin;
-(void)setTextLabel:(GKLabel *)arg1 ;
-(id)attributedStringForString:(id)arg1 withStyle:(id)arg2 ;
-(double)paragraphMargin;
-(void)setParagraphMargin:(double)arg1 ;
-(BOOL)shouldApplyGameCenterTheme;
-(void)setShouldApplyGameCenterTheme:(BOOL)arg1 ;
-(double)bottomMargin;
-(GKLabel *)textLabel;
-(void)setRightMargin:(double)arg1 ;
-(double)rightMargin;
-(double)footerHeightForWidth:(double)arg1 inTableView:(id)arg2 ;
@end

