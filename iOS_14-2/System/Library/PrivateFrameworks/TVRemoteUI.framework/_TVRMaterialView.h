/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)weighting;
-(void)setWeighting:(double)arg1 ;
-(void)layoutSubviews;
-(id)initWithMaterialView:(id)arg1 ;
-(id)initWithDarkMaterialView;
@end

