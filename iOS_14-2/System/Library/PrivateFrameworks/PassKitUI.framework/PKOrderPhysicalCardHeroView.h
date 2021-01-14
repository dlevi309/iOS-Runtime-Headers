/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, PKPhysicalCardArtworkView;

@interface PKOrderPhysicalCardHeroView : UIView {

	UIImageView* _backgroundView;
	PKPhysicalCardArtworkView* _artworkView;

}

@property (nonatomic,readonly) PKPhysicalCardArtworkView * artworkView;              //@synthesize artworkView=_artworkView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(PKPhysicalCardArtworkView *)artworkView;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_backgroundImage;
@end

