/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/

#import <ActionKitUI/ActionKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol WFRemoteFileStatusViewDelegate;
@class UIView, UIActivityIndicatorView, UILabel, UIButton, NSArray;

@interface WFRemoteFileStatusView : UIView {

	id<WFRemoteFileStatusViewDelegate> _delegate;
	UIView* _containerView;
	UIActivityIndicatorView* _indicatorView;
	UILabel* _statusLabel;
	UIButton* _recoveryButton;
	NSArray* _emptyConstraints;
	NSArray* _loadingContraints;
	NSArray* _errorConstraints;

}

@property (nonatomic,readonly) UIView * containerView;                                        //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * indicatorView;                       //@synthesize indicatorView=_indicatorView - In the implementation block
@property (nonatomic,readonly) UILabel * statusLabel;                                         //@synthesize statusLabel=_statusLabel - In the implementation block
@property (nonatomic,readonly) UIButton * recoveryButton;                                     //@synthesize recoveryButton=_recoveryButton - In the implementation block
@property (nonatomic,readonly) NSArray * emptyConstraints;                                    //@synthesize emptyConstraints=_emptyConstraints - In the implementation block
@property (nonatomic,readonly) NSArray * loadingContraints;                                   //@synthesize loadingContraints=_loadingContraints - In the implementation block
@property (nonatomic,readonly) NSArray * errorConstraints;                                    //@synthesize errorConstraints=_errorConstraints - In the implementation block
@property (assign,nonatomic,__weak) id<WFRemoteFileStatusViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id<WFRemoteFileStatusViewDelegate>)delegate;
-(void)setError:(id)arg1 ;
-(void)setDelegate:(id<WFRemoteFileStatusViewDelegate>)arg1 ;
-(UIView *)containerView;
-(void)setEmpty;
-(UIActivityIndicatorView *)indicatorView;
-(UILabel *)statusLabel;
-(void)recoveryButtonTapped;
-(void)setLoading;
-(UIButton *)recoveryButton;
-(NSArray *)emptyConstraints;
-(NSArray *)loadingContraints;
-(NSArray *)errorConstraints;
@end

