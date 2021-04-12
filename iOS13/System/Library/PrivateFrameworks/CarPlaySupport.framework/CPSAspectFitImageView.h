/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <UIKitCore/UIImageView.h>

@class NSLayoutConstraint;

@interface CPSAspectFitImageView : UIImageView {

	NSLayoutConstraint* _aspectConstraint;

}

@property (nonatomic,retain) NSLayoutConstraint * aspectConstraint;              //@synthesize aspectConstraint=_aspectConstraint - In the implementation block
-(id)init;
-(void)setImage:(id)arg1 ;
-(void)_updateConstraints;
-(NSLayoutConstraint *)aspectConstraint;
-(void)setAspectConstraint:(NSLayoutConstraint *)arg1 ;
@end

