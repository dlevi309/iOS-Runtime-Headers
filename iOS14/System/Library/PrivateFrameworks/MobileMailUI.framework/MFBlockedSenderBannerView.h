/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
*/

#import <MobileMailUI/MobileMailUI-Structs.h>
#import <MobileMailUI/MFSuggestionBannerView.h>

@protocol MFBlockedSenderBannerViewDelegate;
@interface MFBlockedSenderBannerView : MFSuggestionBannerView {

	id<MFBlockedSenderBannerViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MFBlockedSenderBannerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id<MFBlockedSenderBannerViewDelegate>)delegate;
-(void)setDelegate:(id<MFBlockedSenderBannerViewDelegate>)arg1 ;
-(void)_titleControlTapped:(id)arg1 ;
-(void)_bannerDismissed:(id)arg1 ;
@end

