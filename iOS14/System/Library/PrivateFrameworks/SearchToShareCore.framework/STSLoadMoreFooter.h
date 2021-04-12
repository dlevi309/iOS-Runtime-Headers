/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchToShareCore.framework/SearchToShareCore
*/

#import <SearchToShareCore/SearchToShareCore-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@protocol STSLoadMoreFooterDelegate;
@class UIActivityIndicatorView, UIImageView, UIImage;

@interface STSLoadMoreFooter : UICollectionReusableView {

	UIActivityIndicatorView* _activityIndicator;
	UIImageView* _providerIconView;
	BOOL _loading;
	id<STSLoadMoreFooterDelegate> _delegate;
	UIImage* _searchProviderImage;

}

@property (assign,nonatomic,__weak) id<STSLoadMoreFooterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isLoading,nonatomic) BOOL loading;                              //@synthesize loading=_loading - In the implementation block
@property (nonatomic,retain) UIImage * searchProviderImage;                              //@synthesize searchProviderImage=_searchProviderImage - In the implementation block
+(double)defaultHeight;
-(void)setLoading:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isLoading;
-(id<STSLoadMoreFooterDelegate>)delegate;
-(void)setDelegate:(id<STSLoadMoreFooterDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIImage *)searchProviderImage;
-(void)setSearchProviderImage:(UIImage *)arg1 ;
-(void)_handleLogoTap:(id)arg1 ;
@end

