/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@protocol VUIUpNextButtonProtocol;
@class VUIUpNextStateView, VUIButton, NSString;

@interface VUIUpNextButtonProperties : NSObject {

	BOOL _dismissOnSelect;
	BOOL _isWatchListed;
	VUIUpNextStateView* _addedStateView;
	VUIUpNextStateView* _removedStateView;
	VUIButton*<VUIUpNextButtonProtocol> _delegate;
	NSString* _canonicalID;

}

@property (nonatomic,retain) NSString * canonicalID;                                           //@synthesize canonicalID=_canonicalID - In the implementation block
@property (assign,nonatomic) BOOL isWatchListed;                                               //@synthesize isWatchListed=_isWatchListed - In the implementation block
@property (assign,nonatomic) BOOL dismissOnSelect;                                             //@synthesize dismissOnSelect=_dismissOnSelect - In the implementation block
@property (nonatomic,readonly) VUIUpNextStateView * addedStateView;                            //@synthesize addedStateView=_addedStateView - In the implementation block
@property (nonatomic,readonly) VUIUpNextStateView * removedStateView;                          //@synthesize removedStateView=_removedStateView - In the implementation block
@property (assign,nonatomic,__weak) VUIButton*<VUIUpNextButtonProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)configureWithElement:(id)arg1 existingButton:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(VUIButton*<VUIUpNextButtonProtocol>)delegate;
-(void)setDelegate:(VUIButton*<VUIUpNextButtonProtocol>)arg1 ;
-(BOOL)isWatchListed;
-(NSString *)canonicalID;
-(void)setIsWatchListed:(BOOL)arg1 ;
-(void)setCanonicalID:(NSString *)arg1 ;
-(VUIUpNextStateView *)addedStateView;
-(VUIUpNextStateView *)removedStateView;
-(void)updateButtonContentView;
-(void)callAPIAndToggleUpNextState;
-(BOOL)dismissOnSelect;
-(void)_errorInUpdatingState:(id)arg1 ;
-(void)setDismissOnSelect:(BOOL)arg1 ;
-(void)_toggleUpNextState;
@end

