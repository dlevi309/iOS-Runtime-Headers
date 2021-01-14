/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
*/

#import <MobileMailUI/MobileMailUI-Structs.h>
#import <MobileMailUI/MFSuggestionBannerView.h>

@protocol MFHasMoreContentBannerViewDelegate;
@class NSString;

@interface MFHasMoreContentBannerView : MFSuggestionBannerView {

	id<MFHasMoreContentBannerViewDelegate> _delegate;

}

@property (readonly) NSString * titleString; 
@property (assign,nonatomic,__weak) id<MFHasMoreContentBannerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)bannerWithFrame:(CGRect)arg1 isPlainText:(BOOL)arg2 remainingBytes:(unsigned long long)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<MFHasMoreContentBannerViewDelegate>)delegate;
-(void)setDelegate:(id<MFHasMoreContentBannerViewDelegate>)arg1 ;
-(void)reloadData;
-(NSString *)titleString;
-(void)_titleControlTapped:(id)arg1 ;
-(id)actionStringIsDownloading:(BOOL)arg1 ;
-(void)requestLoad;
@end

