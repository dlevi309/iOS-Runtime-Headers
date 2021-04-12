/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUViewModelChange.h>

@interface PUBrowsingAnimatedImagePlayerChange : PUViewModelChange {

	BOOL _animatedImageDidChange;
	BOOL _animatedImageLoadingAllowedDidChange;

}

@property (assign,setter=_setAnimatedImageDidChange:,nonatomic) BOOL animatedImageDidChange;                                          //@synthesize animatedImageDidChange=_animatedImageDidChange - In the implementation block
@property (assign,setter=_setAnimatedImageLoadingAllowedDidChange:,nonatomic) BOOL animatedImageLoadingAllowedDidChange;              //@synthesize animatedImageLoadingAllowedDidChange=_animatedImageLoadingAllowedDidChange - In the implementation block
-(void)_setAnimatedImageLoadingAllowedDidChange:(BOOL)arg1 ;
-(void)_setAnimatedImageDidChange:(BOOL)arg1 ;
-(BOOL)animatedImageLoadingAllowedDidChange;
-(BOOL)hasChanges;
-(BOOL)animatedImageDidChange;
@end

