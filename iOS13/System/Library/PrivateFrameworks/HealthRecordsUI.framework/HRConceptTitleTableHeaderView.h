/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <HealthRecordsUI/HealthRecordsUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString;

@interface HRConceptTitleTableHeaderView : UIView {

	 titleLabel;
	 fontChoices;
	 widthCache;
	 titleCache;
	 bottomExtraSpace;

}

@property (assign,nonatomic) double bottomExtraSpace; 
@property (copy,nonatomic) NSString * title; 
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setBottomExtraSpace:(double)arg1 ;
-(double)bottomExtraSpace;
@end

