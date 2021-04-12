/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, NSArray;

@interface PUVideoListContentUnavailableView : UIView {

	BOOL _needsUpdateConstraints;
	UILabel* _messageLabel1;
	UILabel* _messageLabel2;
	NSArray* _constraints;
	CGRect _safeAreaLayoutGuideFrameRect;

}

@property (nonatomic,retain) UILabel * messageLabel1;                                  //@synthesize messageLabel1=_messageLabel1 - In the implementation block
@property (nonatomic,retain) UILabel * messageLabel2;                                  //@synthesize messageLabel2=_messageLabel2 - In the implementation block
@property (setter=_setConstraints:,nonatomic,copy) NSArray * constraints;              //@synthesize constraints=_constraints - In the implementation block
@property (assign,nonatomic) CGRect safeAreaLayoutGuideFrameRect;                      //@synthesize safeAreaLayoutGuideFrameRect=_safeAreaLayoutGuideFrameRect - In the implementation block
-(void)_setConstraints:(id)arg1 ;
-(NSArray *)constraints;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_invalidateConstraints;
-(void)updateConstraints;
-(void)_updateConstraintsIfNeeded;
-(id)_messageLabel;
-(void)_setMessageText:(id)arg1 toLabel:(id)arg2 ;
-(CGRect)safeAreaLayoutGuideFrameRect;
-(void)setSafeAreaLayoutGuideFrameRect:(CGRect)arg1 ;
-(UILabel *)messageLabel1;
-(void)setMessageLabel1:(UILabel *)arg1 ;
-(UILabel *)messageLabel2;
-(void)setMessageLabel2:(UILabel *)arg1 ;
@end

