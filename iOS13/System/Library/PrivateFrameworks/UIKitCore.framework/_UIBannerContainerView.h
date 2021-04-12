/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class NSMutableArray;

@interface _UIBannerContainerView : UIView {

	NSMutableArray* _banners;
	NSMutableArray* _constraints;

}

@property (nonatomic,retain) NSMutableArray * banners;                  //@synthesize banners=_banners - In the implementation block
@property (nonatomic,retain) NSMutableArray * constraints;              //@synthesize constraints=_constraints - In the implementation block
-(NSMutableArray *)constraints;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setConstraints:(NSMutableArray *)arg1 ;
-(void)statusBarFrameDidChange:(id)arg1 ;
-(void)_setBanner:(id)arg1 visible:(BOOL)arg2 alongsideAnimations:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_presentBanner:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_dismissBanner:(id)arg1 alongsideAnimations:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSMutableArray *)banners;
-(void)setBanners:(NSMutableArray *)arg1 ;
@end

