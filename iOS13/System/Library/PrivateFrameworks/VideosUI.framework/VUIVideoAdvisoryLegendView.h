/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class VUIVideoAdvisoryViewLayout, VUILabel, NSString;

@interface VUIVideoAdvisoryLegendView : UIView {

	VUIVideoAdvisoryViewLayout* _layout;
	VUILabel* _legendNameLabel;
	VUILabel* _legendDescriptionLabel;

}

@property (nonatomic,retain) VUIVideoAdvisoryViewLayout * layout;              //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) VUILabel * legendNameLabel;                       //@synthesize legendNameLabel=_legendNameLabel - In the implementation block
@property (nonatomic,retain) VUILabel * legendDescriptionLabel;                //@synthesize legendDescriptionLabel=_legendDescriptionLabel - In the implementation block
@property (nonatomic,copy) NSString * legendName; 
@property (nonatomic,copy) NSString * legendDescription; 
-(VUIVideoAdvisoryViewLayout *)layout;
-(void)setLayout:(VUIVideoAdvisoryViewLayout *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)initWithLayout:(id)arg1 ;
-(VUILabel *)legendNameLabel;
-(CGSize)legendNameSizeThatFits:(CGSize)arg1 ;
-(VUILabel *)legendDescriptionLabel;
-(void)setLegendNameLabel:(VUILabel *)arg1 ;
-(void)setLegendDescriptionLabel:(VUILabel *)arg1 ;
-(NSString *)legendName;
-(void)setLegendName:(NSString *)arg1 ;
-(NSString *)legendDescription;
-(void)setLegendDescription:(NSString *)arg1 ;
@end

