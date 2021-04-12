/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)_backgroundImage;
-(PKPhysicalCardArtworkView *)artworkView;
@end

