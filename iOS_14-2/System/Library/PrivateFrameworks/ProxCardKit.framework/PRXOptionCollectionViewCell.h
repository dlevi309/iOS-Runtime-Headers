/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProxCardKit.framework/ProxCardKit
*/

#import <ProxCardKit/ProxCardKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class PRXSelectionIndicatorView, UILabel;

@interface PRXOptionCollectionViewCell : UICollectionViewCell {

	PRXSelectionIndicatorView* _selectionIndicator;
	UILabel* _textLabel;

}

@property (nonatomic,readonly) UILabel * textLabel;              //@synthesize textLabel=_textLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)setSelected:(BOOL)arg1 ;
-(UILabel *)textLabel;
@end

