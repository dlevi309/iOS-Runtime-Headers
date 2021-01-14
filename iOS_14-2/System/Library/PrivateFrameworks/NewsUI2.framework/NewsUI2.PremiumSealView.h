/*
* Generated on Thursday, January 14, 2021 at 2:24:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <NewsUI2/NewsUI2-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/TUMotionManagerObserver.h>

@interface NewsUI2.PremiumSealView : UIView <TUMotionManagerObserver> {

	 isHidingSeal;
	 innerImageView;
	 outerImageShineView;
	 innerImageShineView;
	 shineImageFactory;
	 eventManager;

}
-(void)motionManager:(id)arg1 didUpdateMotionData:(id)arg2 ;
-(void)motionManager:(id)arg1 motionEnabled:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

