/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchToShareCore.framework/SearchToShareCore
*/

#import <SearchToShareCore/SearchToShareCore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/STSResultDetailViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol STSResultDetailViewControllerDelegate;
@class NSURL, NSString, STSResultDetailView, UIImage, STSAnimatedImageInfo;

@interface STSResultDetailViewController : UIViewController <STSResultDetailViewDelegate, UIGestureRecognizerDelegate> {

	BOOL _useBackgroundBlur;
	BOOL _allowCustomContentViewInteraction;
	id<STSResultDetailViewControllerDelegate> _delegate;
	NSURL* _contentURL;
	NSURL* _providerURL;
	NSString* _queryString;
	unsigned long long _queryId;
	CGSize _contentSize;

}

@property (nonatomic,retain) STSResultDetailView * view; 
@property (assign,nonatomic,__weak) id<STSResultDetailViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                                                     //@synthesize contentSize=_contentSize - In the implementation block
@property (nonatomic,retain) NSURL * contentURL;                                                     //@synthesize contentURL=_contentURL - In the implementation block
@property (nonatomic,readonly) UIImage * thumbnail; 
@property (nonatomic,readonly) STSAnimatedImageInfo * thumbnailInfo; 
@property (assign,nonatomic) CGSize providerIconSize; 
@property (nonatomic,retain) UIImage * providerIcon; 
@property (nonatomic,copy) NSString * providerName; 
@property (nonatomic,retain) NSURL * providerURL;                                                    //@synthesize providerURL=_providerURL - In the implementation block
@property (assign,nonatomic) BOOL isFullscreen; 
@property (nonatomic,retain) NSString * queryString;                                                 //@synthesize queryString=_queryString - In the implementation block
@property (assign,nonatomic) BOOL useBackgroundBlur;                                                 //@synthesize useBackgroundBlur=_useBackgroundBlur - In the implementation block
@property (assign) unsigned long long queryId;                                                       //@synthesize queryId=_queryId - In the implementation block
@property (assign,nonatomic) BOOL allowCustomContentViewInteraction;                                 //@synthesize allowCustomContentViewInteraction=_allowCustomContentViewInteraction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)prefersStatusBarHidden;
-(void)setContentSize:(CGSize)arg1 ;
-(NSURL *)contentURL;
-(BOOL)isFullscreen;
-(unsigned long long)queryId;
-(UIImage *)thumbnail;
-(id<STSResultDetailViewControllerDelegate>)delegate;
-(CGSize)contentSize;
-(NSString *)queryString;
-(void)setQueryString:(NSString *)arg1 ;
-(id)detailView;
-(void)setDelegate:(id<STSResultDetailViewControllerDelegate>)arg1 ;
-(void)_handleTap:(id)arg1 ;
-(void)setQueryId:(unsigned long long)arg1 ;
-(void)setProviderURL:(NSURL *)arg1 ;
-(void)setContentURL:(NSURL *)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)loadView;
-(NSURL *)providerURL;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setProviderName:(NSString *)arg1 ;
-(void)setIsFullscreen:(BOOL)arg1 ;
-(NSString *)providerName;
-(void)setUseBackgroundBlur:(BOOL)arg1 ;
-(STSAnimatedImageInfo *)thumbnailInfo;
-(CGSize)providerIconSize;
-(void)setProviderIconSize:(CGSize)arg1 ;
-(UIImage *)providerIcon;
-(void)setProviderIcon:(UIImage *)arg1 ;
-(void)updateWithThumbnail:(id)arg1 orThumbnailInfo:(id)arg2 ;
-(CGRect)contentFrameForBounds:(CGRect)arg1 traitCollection:(id)arg2 ;
-(void)detailViewDidTapProvider:(id)arg1 ;
-(void)detailViewDidTapSend:(id)arg1 ;
-(void)updateCustomContentWithView:(id)arg1 ;
-(BOOL)useBackgroundBlur;
-(BOOL)allowCustomContentViewInteraction;
-(void)setAllowCustomContentViewInteraction:(BOOL)arg1 ;
@end

