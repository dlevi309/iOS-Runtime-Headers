/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
*/

#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/WFNetworkCell.h>

@class NSString, WFHotspotDetails, UIStackView, UILabel, WFHotspotDetailsView, NSLayoutConstraint, WFAssociationStateView;

@interface WFHotspotCell : UITableViewCell <WFNetworkCell> {

	BOOL _personalHotspot;
	BOOL _secure;
	unsigned long long _bars;
	NSString* _title;
	WFHotspotDetails* _hotspotDetails;
	UIStackView* _stackView;
	UILabel* _nameLabel;
	WFHotspotDetailsView* _hotspotDetailsView;
	NSLayoutConstraint* _stackViewTopConstraint;
	NSLayoutConstraint* _stackViewBottomConstraint;
	WFAssociationStateView* _associationStateView;

}

@property (assign,nonatomic,__weak) UIStackView * stackView;                                     //@synthesize stackView=_stackView - In the implementation block
@property (assign,nonatomic,__weak) UILabel * nameLabel;                                         //@synthesize nameLabel=_nameLabel - In the implementation block
@property (assign,nonatomic,__weak) WFHotspotDetailsView * hotspotDetailsView;                   //@synthesize hotspotDetailsView=_hotspotDetailsView - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * stackViewTopConstraint;                 //@synthesize stackViewTopConstraint=_stackViewTopConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * stackViewBottomConstraint;              //@synthesize stackViewBottomConstraint=_stackViewBottomConstraint - In the implementation block
@property (assign,nonatomic,__weak) WFAssociationStateView * associationStateView;               //@synthesize associationStateView=_associationStateView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * title;                                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle; 
@property (assign,nonatomic) BOOL secure;                                                        //@synthesize secure=_secure - In the implementation block
@property (assign,nonatomic) long long state; 
@property (assign,nonatomic) unsigned long long bars;                                            //@synthesize bars=_bars - In the implementation block
@property (assign,nonatomic) BOOL personalHotspot;                                               //@synthesize personalHotspot=_personalHotspot - In the implementation block
@property (nonatomic,retain) WFHotspotDetails * hotspotDetails;                                  //@synthesize hotspotDetails=_hotspotDetails - In the implementation block
@property (assign,nonatomic) BOOL connectionError; 
-(long long)state;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(unsigned long long)bars;
-(void)prepareForReuse;
-(void)setState:(long long)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(UIStackView *)stackView;
-(void)awakeFromNib;
-(void)setStackView:(UIStackView *)arg1 ;
-(void)setSecure:(BOOL)arg1 ;
-(void)setNameLabel:(UILabel *)arg1 ;
-(UILabel *)nameLabel;
-(void)setBars:(unsigned long long)arg1 ;
-(BOOL)secure;
-(void)setStackViewTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setStackViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)stackViewTopConstraint;
-(NSLayoutConstraint *)stackViewBottomConstraint;
-(void)setConnectionError:(BOOL)arg1 ;
-(double)_verticalPadding;
-(void)_adjustStackViewPadding;
-(void)setPersonalHotspot:(BOOL)arg1 ;
-(WFHotspotDetails *)hotspotDetails;
-(void)setHotspotDetails:(WFHotspotDetails *)arg1 ;
-(WFAssociationStateView *)associationStateView;
-(BOOL)personalHotspot;
-(void)setAssociationStateView:(WFAssociationStateView *)arg1 ;
-(WFHotspotDetailsView *)hotspotDetailsView;
-(void)setHotspotDetailsView:(WFHotspotDetailsView *)arg1 ;
@end

