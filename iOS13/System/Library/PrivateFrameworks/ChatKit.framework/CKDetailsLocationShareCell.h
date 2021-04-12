/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKDetailsCell.h>
#import <libobjc.A.dylib/CKDetailsCell.h>

@class UILabel, NSString;

@interface CKDetailsLocationShareCell : CKDetailsCell <CKDetailsCell> {

	BOOL _showOfferTimeRemaining;
	double _offerTimeRemaining;
	UILabel* _timeRemainingLabel;

}

@property (nonatomic,retain) UILabel * timeRemainingLabel;              //@synthesize timeRemainingLabel=_timeRemainingLabel - In the implementation block
@property (assign,nonatomic) BOOL showOfferTimeRemaining;               //@synthesize showOfferTimeRemaining=_showOfferTimeRemaining - In the implementation block
@property (assign,nonatomic) double offerTimeRemaining;                 //@synthesize offerTimeRemaining=_offerTimeRemaining - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)preferredHeight;
+(id)reuseIdentifier;
+(BOOL)shouldHighlight;
-(void)prepareForReuse;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UILabel *)timeRemainingLabel;
-(void)setTimeRemainingLabel:(UILabel *)arg1 ;
-(BOOL)showOfferTimeRemaining;
-(void)setShowOfferTimeRemaining:(BOOL)arg1 ;
-(id)timeStringForTimeInterval:(double)arg1 ;
-(void)setOfferTimeRemaining:(double)arg1 ;
-(double)offerTimeRemaining;
@end

