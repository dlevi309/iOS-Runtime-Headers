/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class UILabel, PSSpecifier, UITableView, CNFRegLearnMoreButton, NSString, NSURL;

@interface CNFRegTableLabel : UIView <PSHeaderFooterView> {

	UILabel* _label;
	PSSpecifier* _specifier;
	UITableView* _cnfreg_tableView;
	BOOL _isTopmostHeader;
	CNFRegLearnMoreButton* _urlButton;
	NSString* _URLText;
	NSURL* _URLTarget;

}

@property (nonatomic,copy) NSString * URLText;                            //@synthesize URLText=_URLText - In the implementation block
@property (nonatomic,copy) NSURL * URLTarget;                             //@synthesize URLTarget=_URLTarget - In the implementation block
@property (assign,nonatomic) UITableView * cnfreg_tableView;              //@synthesize cnfreg_tableView=_cnfreg_tableView - In the implementation block
@property (assign,nonatomic) BOOL isTopmostHeader;                        //@synthesize isTopmostHeader=_isTopmostHeader - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(double)_topPadding;
-(double)_bottomPadding;
-(id)_labelText;
-(id)initWithSpecifier:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 ;
-(NSURL *)URLTarget;
-(void)clearSpecifier;
-(void)updateLabelText;
-(void)setCnfreg_tableView:(UITableView *)arg1 ;
-(void)setIsTopmostHeader:(BOOL)arg1 ;
-(BOOL)isTopmostHeader;
-(double)_labelInset;
-(long long)_labelTextAlignment;
-(id)_URLTarget;
-(void)_urlTapped:(id)arg1 ;
-(id)_URLText;
-(void)setURLText:(NSString *)arg1 ;
-(void)setURLTarget:(NSURL *)arg1 ;
-(UITableView *)cnfreg_tableView;
-(NSString *)URLText;
@end

