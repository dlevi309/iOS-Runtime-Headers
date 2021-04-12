/*
* Generated on Thursday, January 14, 2021 at 2:27:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

