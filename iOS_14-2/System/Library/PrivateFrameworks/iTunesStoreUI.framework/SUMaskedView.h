/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKitCore/UIView.h>

@class SUMaskProvider;

@interface SUMaskedView : UIView {

	SUMaskProvider* _maskProvider;

}

@property (nonatomic,retain) SUMaskProvider * maskProvider;              //@synthesize maskProvider=_maskProvider - In the implementation block
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setMaskProvider:(SUMaskProvider *)arg1 ;
-(SUMaskProvider *)maskProvider;
-(CGPathRef)copyMaskPath;
-(void)_reloadMask;
@end

