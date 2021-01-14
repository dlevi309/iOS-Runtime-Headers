/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
*/

#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/WFNetworkCell.h>

@class NSString, WFHotspotDetails, UIImageView, UILabel, UIStackView, NSLayoutConstraint, WFAssociationStateView;

@interface WFNetworkListCell : UITableViewCell <WFNetworkCell> {

	BOOL _secure;
	BOOL _personalHotspot;
	BOOL _connectionError;
	unsigned long long _bars;
	NSString* _title;
	NSString* _subtitle;
	UIImageView* _signalImageView;
	UIImageView* _lockImageView;
	UILabel* _nameLabel;
	UILabel* _subtitleLabel;
	UIStackView* _stackView;
	NSLayoutConstraint* _stackViewTopConstraint;
	NSLayoutConstraint* _stackViewBottomConstraint;
	WFAssociationStateView* _associationStateView;
	NSLayoutConstraint* _signalImageViewCenterConstraint;

}

@property (assign,nonatomic,__weak) UIImageView * signalImageView;                                     //@synthesize signalImageView=_signalImageView - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * lockImageView;                                       //@synthesize lockImageView=_lockImageView - In the implementation block
@property (assign,nonatomic,__weak) UILabel * nameLabel;                                               //@synthesize nameLabel=_nameLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * subtitleLabel;                                           //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (assign,nonatomic,__weak) UIStackView * stackView;                                           //@synthesize stackView=_stackView - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * stackViewTopConstraint;                       //@synthesize stackViewTopConstraint=_stackViewTopConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * stackViewBottomConstraint;                    //@synthesize stackViewBottomConstraint=_stackViewBottomConstraint - In the implementation block
@property (assign,nonatomic,__weak) WFAssociationStateView * associationStateView;                     //@synthesize associationStateView=_associationStateView - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * signalImageViewCenterConstraint;              //@synthesize signalImageViewCenterConstraint=_signalImageViewCenterConstraint - In the implementation block
@property (nonatomic,copy) NSString * title;                                                           //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                                        //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,nonatomic) BOOL secure;                                                              //@synthesize secure=_secure - In the implementation block
@property (assign,nonatomic) long long state; 
@property (assign,nonatomic) unsigned long long bars;                                                  //@synthesize bars=_bars - In the implementation block
@property (assign,nonatomic) BOOL personalHotspot;                                                     //@synthesize personalHotspot=_personalHotspot - In the implementation block
@property (nonatomic,retain) WFHotspotDetails * hotspotDetails; 
@property (assign,nonatomic) BOOL connectionError;                                                     //@synthesize connectionError=_connectionError - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)secure;
-(void)setPersonalHotspot:(BOOL)arg1 ;
-(void)setSecure:(BOOL)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(NSLayoutConstraint *)stackViewBottomConstraint;
-(BOOL)connectionError;
-(void)setConnectionError:(BOOL)arg1 ;
-(NSString *)subtitle;
-(double)_verticalPadding;
-(void)setTitle:(NSString *)arg1 ;
-(UIStackView *)stackView;
-(void)setBars:(unsigned long long)arg1 ;
-(void)prepareForReuse;
-(unsigned long long)bars;
-(UILabel *)subtitleLabel;
-(void)setState:(long long)arg1 ;
-(void)awakeFromNib;
-(void)setSubtitle:(NSString *)arg1 ;
-(UILabel *)nameLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setNameLabel:(UILabel *)arg1 ;
-(void)setStackView:(UIStackView *)arg1 ;
-(NSString *)title;
-(NSLayoutConstraint *)stackViewTopConstraint;
-(void)setStackViewTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setStackViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_adjustStackViewPadding;
-(void)setHotspotDetails:(WFHotspotDetails *)arg1 ;
-(UIImageView *)lockImageView;
-(UIImageView *)signalImageView;
-(id)imageFromSignalBars:(unsigned long long)arg1 ;
-(WFAssociationStateView *)associationStateView;
-(void)_updateSignalImage;
-(BOOL)personalHotspot;
-(NSLayoutConstraint *)signalImageViewCenterConstraint;
-(void)setSignalImageView:(UIImageView *)arg1 ;
-(void)setLockImageView:(UIImageView *)arg1 ;
-(void)setAssociationStateView:(WFAssociationStateView *)arg1 ;
-(void)setSignalImageViewCenterConstraint:(NSLayoutConstraint *)arg1 ;
@end

