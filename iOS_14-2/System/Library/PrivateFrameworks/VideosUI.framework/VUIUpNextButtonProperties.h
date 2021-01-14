/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@protocol VUIUpNextButtonProtocol;
@class VUIUpNextStateView, VUIButton, NSString;

@interface VUIUpNextButtonProperties : NSObject {

	BOOL _isWatchListed;
	BOOL _dismissOnSelect;
	BOOL _confirmationShouldWaitCompletion;
	VUIUpNextStateView* _addedStateView;
	VUIUpNextStateView* _removedStateView;
	VUIButton*<VUIUpNextButtonProtocol> _delegate;
	NSString* _canonicalID;

}

@property (nonatomic,readonly) VUIUpNextStateView * addedStateView;                            //@synthesize addedStateView=_addedStateView - In the implementation block
@property (nonatomic,readonly) VUIUpNextStateView * removedStateView;                          //@synthesize removedStateView=_removedStateView - In the implementation block
@property (assign,nonatomic,__weak) VUIButton*<VUIUpNextButtonProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * canonicalID;                                           //@synthesize canonicalID=_canonicalID - In the implementation block
@property (assign,nonatomic) BOOL isWatchListed;                                               //@synthesize isWatchListed=_isWatchListed - In the implementation block
@property (assign,nonatomic) BOOL dismissOnSelect;                                             //@synthesize dismissOnSelect=_dismissOnSelect - In the implementation block
@property (assign,nonatomic) BOOL confirmationShouldWaitCompletion;                            //@synthesize confirmationShouldWaitCompletion=_confirmationShouldWaitCompletion - In the implementation block
+(id)configureWithElement:(id)arg1 existingButton:(id)arg2 ;
-(id)init;
-(VUIButton*<VUIUpNextButtonProtocol>)delegate;
-(NSString *)canonicalID;
-(void)setIsWatchListed:(BOOL)arg1 ;
-(BOOL)isWatchListed;
-(void)setDelegate:(VUIButton*<VUIUpNextButtonProtocol>)arg1 ;
-(void)dealloc;
-(void)setCanonicalID:(NSString *)arg1 ;
-(BOOL)confirmationShouldWaitCompletion;
-(void)setConfirmationShouldWaitCompletion:(BOOL)arg1 ;
-(VUIUpNextStateView *)addedStateView;
-(VUIUpNextStateView *)removedStateView;
-(void)updateButtonContentView;
-(void)callAPIAndToggleUpNextState;
-(BOOL)dismissOnSelect;
-(void)_errorInUpdatingState:(id)arg1 ;
-(void)setDismissOnSelect:(BOOL)arg1 ;
-(void)_toggleUpNextState;
-(void)setupNotificationObserver;
@end

