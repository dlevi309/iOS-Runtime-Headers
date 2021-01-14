/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileLookup.framework/MobileLookup
*/

#import <UIKitCore/UIView.h>

@interface MLUBlurryView : UIView {

	BOOL _hasActivated;
	BOOL _shouldRasterizeForTransition;

}

@property (assign) double blurRadius; 
@property (assign,nonatomic) BOOL shouldRasterizeForTransition;              //@synthesize shouldRasterizeForTransition=_shouldRasterizeForTransition - In the implementation block
-(void)setBlurRadius:(double)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)_activateBlurring;
-(double)blurRadius;
-(void)setShouldRasterizeForTransition:(BOOL)arg1 ;
-(BOOL)shouldRasterizeForTransition;
@end

