/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
*/

#import <MobileMailUI/MobileMailUI-Structs.h>
#import <MobileMailUI/MFSuggestionBannerView.h>

@protocol MFBlockedSenderBannerViewDelegate;
@interface MFBlockedSenderBannerView : MFSuggestionBannerView {

	id<MFBlockedSenderBannerViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MFBlockedSenderBannerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<MFBlockedSenderBannerViewDelegate>)delegate;
-(void)setDelegate:(id<MFBlockedSenderBannerViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_titleControlTapped:(id)arg1 ;
-(void)_bannerDismissed:(id)arg1 ;
@end

