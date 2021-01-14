/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKDetailsCell.h>
#import <libobjc.A.dylib/CKDetailsCell.h>

@class UIMenu, CKStandardButton, UILabel, NSString;

@interface CKDetailsLocationShareCell : CKDetailsCell <CKDetailsCell> {

	BOOL _showOfferTimeRemaining;
	UIMenu* _menu;
	double _offerTimeRemaining;
	CKStandardButton* _button;
	UILabel* _timeRemainingLabel;

}

@property (nonatomic,retain) CKStandardButton * button;                 //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) UILabel * timeRemainingLabel;              //@synthesize timeRemainingLabel=_timeRemainingLabel - In the implementation block
@property (nonatomic,copy) UIMenu * menu;                               //@synthesize menu=_menu - In the implementation block
@property (assign,nonatomic) BOOL showOfferTimeRemaining;               //@synthesize showOfferTimeRemaining=_showOfferTimeRemaining - In the implementation block
@property (assign,nonatomic) double offerTimeRemaining;                 //@synthesize offerTimeRemaining=_offerTimeRemaining - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldHighlight;
+(double)preferredHeight;
+(id)reuseIdentifier;
-(UIMenu *)menu;
-(CKStandardButton *)button;
-(void)setMenu:(UIMenu *)arg1 ;
-(void)setButton:(CKStandardButton *)arg1 ;
-(void)prepareForReuse;
-(UILabel *)timeRemainingLabel;
-(void)setTimeRemainingLabel:(UILabel *)arg1 ;
-(BOOL)showOfferTimeRemaining;
-(void)setShowOfferTimeRemaining:(BOOL)arg1 ;
-(id)timeStringForTimeInterval:(double)arg1 ;
-(void)setOfferTimeRemaining:(double)arg1 ;
-(double)offerTimeRemaining;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

