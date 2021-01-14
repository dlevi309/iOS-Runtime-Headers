/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <AppleMediaServicesUI/AppleMediaServicesUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class AMSUICommonView;

@interface AMSUICommonCollectionViewCell : UICollectionViewCell {

	AMSUICommonView* _underlyingContentView;

}

@property (nonatomic,readonly) AMSUICommonView * underlyingContentView;              //@synthesize underlyingContentView=_underlyingContentView - In the implementation block
@property (nonatomic,readonly) AMSUICommonView * contentView; 
-(void)_setup;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(AMSUICommonView *)contentView;
-(AMSUICommonView *)underlyingContentView;
@end

