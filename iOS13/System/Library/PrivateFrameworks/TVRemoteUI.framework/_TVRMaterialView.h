/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
*/

#import <UIKitCore/UIView.h>

@class MTMaterialView;

@interface _TVRMaterialView : UIView {

	MTMaterialView* _materialView;

}

@property (assign,nonatomic) double weighting; 
+(id)seperatorMaterialView;
+(id)backgroundMaterialViewWithWeighting:(double)arg1 ;
+(id)trackpadMaterialView;
-(void)layoutSubviews;
-(void)setWeighting:(double)arg1 ;
-(double)weighting;
-(id)initWithMaterialView:(id)arg1 ;
-(id)initWithDarkMaterialView;
@end

