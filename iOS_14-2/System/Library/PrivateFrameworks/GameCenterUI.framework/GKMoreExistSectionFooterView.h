/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class GKLabel, NSString;

@interface GKMoreExistSectionFooterView : UICollectionReusableView {

	GKLabel* _label;

}

@property (nonatomic,retain) GKLabel * label;              //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSString * text; 
+(double)defaultHeight;
+(BOOL)requiresConstraintBasedLayout;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(NSString *)text;
-(void)setLabel:(GKLabel *)arg1 ;
-(GKLabel *)label;
@end

