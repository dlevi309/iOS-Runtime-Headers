/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIImageView, NSString;

@interface PXCMMTranscriptBubbleFooterView : UIView {

	UILabel* _primaryLabel;
	UILabel* _secondaryLabel;
	UIImageView* _chevronImageView;

}

@property (nonatomic,copy) NSString * primaryText; 
@property (nonatomic,copy) NSString * secondaryText; 
@property (assign,nonatomic) BOOL chevronIsHidden; 
+(double)desiredHeight;
+(double)_primaryToSecondaryBaselineSpacing;
+(double)_topToPrimaryBaselineSpacing;
+(double)_secondaryBaselineToBottomSpacing;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(NSString *)primaryText;
-(void)setPrimaryText:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSecondaryText:(NSString *)arg1 ;
-(NSString *)secondaryText;
-(BOOL)chevronIsHidden;
-(void)setChevronIsHidden:(BOOL)arg1 ;
@end

