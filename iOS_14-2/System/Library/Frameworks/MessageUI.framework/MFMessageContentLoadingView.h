/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setLoadingIndicatorVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)layoutSubviews;
-(UIActivityIndicatorView *)activityIndicatorView;
-(void)setActivityIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(void)setLoadingTitle:(NSString *)arg1 ;
-(BOOL)isLoadingIndicatorVisible;
-(NSString *)loadingTitle;
-(UILabel *)loadingLabel;
-(void)setLoadingIndicatorVisible:(BOOL)arg1 ;
-(void)setLoadingLabel:(UILabel *)arg1 ;
-(void)dealloc;
@end

