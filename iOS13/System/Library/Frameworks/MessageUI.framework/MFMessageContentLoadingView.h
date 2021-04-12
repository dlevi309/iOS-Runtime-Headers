/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UIActivityIndicatorView, UILabel;

@interface MFMessageContentLoadingView : UIView {

	NSString* _loadingTitle;
	UIActivityIndicatorView* _activityIndicatorView;
	UILabel* _loadingLabel;

}

@property (nonatomic,retain) UIActivityIndicatorView * activityIndicatorView;                            //@synthesize activityIndicatorView=_activityIndicatorView - In the implementation block
@property (nonatomic,retain) UILabel * loadingLabel;                                                     //@synthesize loadingLabel=_loadingLabel - In the implementation block
@property (assign,getter=isLoadingIndicatorVisible,nonatomic) BOOL loadingIndicatorVisible; 
@property (nonatomic,copy) NSString * loadingTitle;                                                      //@synthesize loadingTitle=_loadingTitle - In the implementation block
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIActivityIndicatorView *)activityIndicatorView;
-(void)setActivityIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(void)setLoadingTitle:(NSString *)arg1 ;
-(NSString *)loadingTitle;
-(void)setLoadingIndicatorVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)isLoadingIndicatorVisible;
-(UILabel *)loadingLabel;
-(void)setLoadingIndicatorVisible:(BOOL)arg1 ;
-(void)setLoadingLabel:(UILabel *)arg1 ;
@end

