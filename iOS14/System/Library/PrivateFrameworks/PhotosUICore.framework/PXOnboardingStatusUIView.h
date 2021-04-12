/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UILabel, UIProgressView, NSArray;

@interface PXOnboardingStatusUIView : UIView {

	BOOL _paused;
	double _progress;
	NSString* _title;
	NSString* _descriptionText;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	UIProgressView* _progressView;
	NSArray* _constraints;

}

@property (nonatomic,retain) UILabel * titleLabel;                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;                 //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) UIProgressView * progressView;              //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) NSArray * constraints;                      //@synthesize constraints=_constraints - In the implementation block
@property (assign,nonatomic) double progress;                            //@synthesize progress=_progress - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused;                //@synthesize paused=_paused - In the implementation block
@property (nonatomic,copy) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * descriptionText;                   //@synthesize descriptionText=_descriptionText - In the implementation block
-(UILabel *)titleLabel;
-(NSArray *)constraints;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setConstraints:(NSArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)progress;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(void)commonInit;
-(void)updateConstraints;
-(void)setProgress:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setProgressView:(UIProgressView *)arg1 ;
-(UIProgressView *)progressView;
-(void)_createViews;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(UILabel *)descriptionLabel;
-(BOOL)isPaused;
-(NSString *)title;
@end

