/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
*/

#import <MobileMailUI/MobileMailUI-Structs.h>
#import <MobileMailUI/MFSuggestionBannerView.h>

@protocol MFLoadBlockedContentBannerViewDelegate;
@interface MFLoadBlockedContentBannerView : MFSuggestionBannerView {

	long long _blockingReason;
	id<MFLoadBlockedContentBannerViewDelegate> _delegate;
	unsigned long long _blockedContentTypes;

}

@property (assign,nonatomic,__weak) id<MFLoadBlockedContentBannerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long blockedContentTypes;                                  //@synthesize blockedContentTypes=_blockedContentTypes - In the implementation block
-(id<MFLoadBlockedContentBannerViewDelegate>)delegate;
-(void)setDelegate:(id<MFLoadBlockedContentBannerViewDelegate>)arg1 ;
-(void)_titleControlTapped:(id)arg1 ;
-(void)_updateBannerText;
-(id)initWithFrame:(CGRect)arg1 blockedContentTypes:(unsigned long long)arg2 blockingReason:(long long)arg3 ;
-(void)setBlockedContentTypes:(unsigned long long)arg1 ;
-(unsigned long long)blockedContentTypes;
@end

