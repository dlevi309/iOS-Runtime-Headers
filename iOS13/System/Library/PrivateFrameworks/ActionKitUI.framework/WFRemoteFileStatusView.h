/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<WFRemoteFileStatusViewDelegate>)delegate;
-(void)setDelegate:(id<WFRemoteFileStatusViewDelegate>)arg1 ;
-(void)setError:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)containerView;
-(UILabel *)statusLabel;
-(UIActivityIndicatorView *)indicatorView;
-(void)setEmpty;
-(UIButton *)recoveryButton;
-(void)recoveryButtonTapped;
-(void)setLoading;
-(NSArray *)emptyConstraints;
-(NSArray *)loadingContraints;
-(NSArray *)errorConstraints;
@end

