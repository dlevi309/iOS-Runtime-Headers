/*
* Generated on Monday, March 1, 2021 at 2:34:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
*/

#import <UIKitCore/UIView.h>

@interface DCSinglePixelLineView : UIView {

	BOOL _hasSetUpSizeConstraint;

}

@property (assign,nonatomic) BOOL hasSetUpSizeConstraint;              //@synthesize hasSetUpSizeConstraint=_hasSetUpSizeConstraint - In the implementation block
-(void)updateConstraints;
-(void)setUpHeightConstraintIfNecessary;
-(BOOL)hasSetUpSizeConstraint;
-(id)findSizeLayoutConstraintIfExists;
-(id)addSizeConstraint;
-(void)setHasSetUpSizeConstraint:(BOOL)arg1 ;
@end

