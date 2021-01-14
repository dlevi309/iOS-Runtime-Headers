/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SFLinkPreviewHeaderContentViewDelegate.h>
#import <libobjc.A.dylib/_SFFluidProgressViewDelegate.h>

@protocol _SFLinkPreviewHeaderDelegate;
@class SFLinkPreviewHeaderContentView, UIView, NSString, _SFFluidProgressView;

@interface _SFLinkPreviewHeader : UIView <SFLinkPreviewHeaderContentViewDelegate, _SFFluidProgressViewDelegate> {

	SFLinkPreviewHeaderContentView* _contentView;
	UIView* _hairline;
	BOOL _isMinimumPreviewUI;
	CGRect _lastLayoutBounds;
	id<_SFLinkPreviewHeaderDelegate> _delegate;
	NSString* _domain;
	_SFFluidProgressView* _progressView;

}

@property (assign,nonatomic,__weak) id<_SFLinkPreviewHeaderDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * domain;                                                  //@synthesize domain=_domain - In the implementation block
@property (nonatomic,retain) _SFFluidProgressView * progressView;                              //@synthesize progressView=_progressView - In the implementation block
@property (assign,getter=isLinkPreviewEnabled,nonatomic) BOOL linkPreviewEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)defaultHeight;
-(CGSize)intrinsicContentSize;
-(BOOL)isLinkPreviewEnabled;
-(BOOL)linkPreviewEnabled;
-(id<_SFLinkPreviewHeaderDelegate>)delegate;
-(id)initWithMinimumPreviewUI:(BOOL)arg1 ;
-(void)setLinkPreviewEnabled:(BOOL)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(NSString *)domain;
-(void)setDelegate:(id<_SFLinkPreviewHeaderDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)linkPreviewHeaderContentView:(id)arg1 didEnableLinkPreview:(BOOL)arg2 ;
-(void)setProgressView:(_SFFluidProgressView *)arg1 ;
-(_SFFluidProgressView *)progressView;
-(void)fluidProgressViewDidShowProgress:(id)arg1 ;
-(void)fluidProgressViewWillShowProgress:(id)arg1 ;
@end

