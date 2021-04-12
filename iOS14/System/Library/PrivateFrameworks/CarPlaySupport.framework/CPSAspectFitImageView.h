/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <UIKitCore/UIImageView.h>

@class NSLayoutConstraint;

@interface CPSAspectFitImageView : UIImageView {

	NSLayoutConstraint* _aspectConstraint;

}

@property (nonatomic,retain) NSLayoutConstraint * aspectConstraint;              //@synthesize aspectConstraint=_aspectConstraint - In the implementation block
-(void)setImage:(id)arg1 ;
-(id)init;
-(void)_updateConstraints;
-(NSLayoutConstraint *)aspectConstraint;
-(void)setAspectConstraint:(NSLayoutConstraint *)arg1 ;
@end

