/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>
#import <libobjc.A.dylib/_GKStateMachineDelegate.h>

@class GKPlaceholderView, NSString, UIActivityIndicatorView, GKPlaceholderContentStateMachine, NSArray;

@interface GKCollectionViewPlaceholderView : UICollectionReusableView <_GKStateMachineDelegate> {

	GKPlaceholderView* _placeholderView;
	NSString* _noContentTitle;
	NSString* _noContentMessage;
	NSString* _noContentButtonTitle;
	id _noContentButtonTarget;
	SEL _noContentButtonAction;
	NSString* _errorTitle;
	NSString* _errorMessage;
	long long _alignment;
	UIActivityIndicatorView* _loadingIndicatorView;
	GKPlaceholderContentStateMachine* _loadingMachine;
	NSArray* _cachedConstraints;

}

@property (nonatomic,retain) GKPlaceholderView * placeholderView;                            //@synthesize placeholderView=_placeholderView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * loadingIndicatorView;                 //@synthesize loadingIndicatorView=_loadingIndicatorView - In the implementation block
@property (nonatomic,retain) GKPlaceholderContentStateMachine * loadingMachine;              //@synthesize loadingMachine=_loadingMachine - In the implementation block
@property (nonatomic,retain) NSArray * cachedConstraints;                                    //@synthesize cachedConstraints=_cachedConstraints - In the implementation block
@property (nonatomic,retain) NSString * loadingState; 
@property (nonatomic,retain) NSString * noContentTitle;                                      //@synthesize noContentTitle=_noContentTitle - In the implementation block
@property (nonatomic,retain) NSString * noContentMessage;                                    //@synthesize noContentMessage=_noContentMessage - In the implementation block
@property (nonatomic,retain) NSString * noContentButtonTitle;                                //@synthesize noContentButtonTitle=_noContentButtonTitle - In the implementation block
@property (assign,nonatomic) id noContentButtonTarget;                                       //@synthesize noContentButtonTarget=_noContentButtonTarget - In the implementation block
@property (assign,nonatomic) SEL noContentButtonAction;                                      //@synthesize noContentButtonAction=_noContentButtonAction - In the implementation block
@property (nonatomic,retain) NSString * errorTitle;                                          //@synthesize errorTitle=_errorTitle - In the implementation block
@property (nonatomic,retain) NSString * errorMessage;                                        //@synthesize errorMessage=_errorMessage - In the implementation block
@property (assign,nonatomic) long long alignment;                                            //@synthesize alignment=_alignment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setPlaceholderView:(GKPlaceholderView *)arg1 ;
-(long long)alignment;
-(GKPlaceholderView *)placeholderView;
-(NSString *)noContentTitle;
-(NSString *)noContentMessage;
-(NSString *)noContentButtonTitle;
-(id)noContentButtonTarget;
-(SEL)noContentButtonAction;
-(NSString *)errorMessage;
-(NSString *)errorTitle;
-(void)setAlignment:(long long)arg1 ;
-(void)setErrorTitle:(NSString *)arg1 ;
-(void)updateConstraints;
-(UIActivityIndicatorView *)loadingIndicatorView;
-(void)setLoadingIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(void)buttonPressed;
-(NSArray *)cachedConstraints;
-(void)setCachedConstraints:(NSArray *)arg1 ;
-(void)delayedShowLoadingIndicator;
-(void)didExitNoContentState;
-(void)didExitErrorState;
-(GKPlaceholderContentStateMachine *)loadingMachine;
-(void)didEnterLoadingState;
-(void)didExitLoadingState;
-(void)didEnterNoContentState;
-(void)didEnterErrorState;
-(void)setNoContentTitle:(NSString *)arg1 ;
-(void)setNoContentMessage:(NSString *)arg1 ;
-(void)setLoadingMachine:(GKPlaceholderContentStateMachine *)arg1 ;
-(void)setNoContentButtonTitle:(NSString *)arg1 ;
-(void)setNoContentButtonTarget:(id)arg1 ;
-(void)setNoContentButtonAction:(SEL)arg1 ;
-(void)dealloc;
-(NSString *)loadingState;
-(void)setLoadingState:(NSString *)arg1 ;
-(void)setErrorMessage:(NSString *)arg1 ;
@end

