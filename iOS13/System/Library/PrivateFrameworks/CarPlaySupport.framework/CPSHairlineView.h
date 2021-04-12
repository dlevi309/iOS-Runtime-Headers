/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <UIKitCore/UIView.h>

@class NSLayoutConstraint;

@interface CPSHairlineView : UIView {

	long long _axis;
	NSLayoutConstraint* _strokeThicknessConstraint;

}

@property (assign,nonatomic) long long axis;                                              //@synthesize axis=_axis - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * strokeThicknessConstraint;              //@synthesize strokeThicknessConstraint=_strokeThicknessConstraint - In the implementation block
+(id)grayHairlineViewAlongAxis:(long long)arg1 ;
-(long long)axis;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setAxis:(long long)arg1 ;
-(id)initWithAxis:(long long)arg1 color:(id)arg2 ;
-(void)setStrokeThicknessConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_updateStrokeThickness;
-(NSLayoutConstraint *)strokeThicknessConstraint;
@end

