/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKitCore/UIView.h>

@class SUMaskProvider;

@interface SUMaskedView : UIView {

	SUMaskProvider* _maskProvider;

}

@property (nonatomic,retain) SUMaskProvider * maskProvider;              //@synthesize maskProvider=_maskProvider - In the implementation block
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)setMaskProvider:(SUMaskProvider *)arg1 ;
-(SUMaskProvider *)maskProvider;
-(CGPathRef)copyMaskPath;
-(void)_reloadMask;
@end

