/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithLayout:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setLayout:(VUIVideoAdvisoryViewLayout *)arg1 ;
-(VUIVideoAdvisoryViewLayout *)layout;
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

