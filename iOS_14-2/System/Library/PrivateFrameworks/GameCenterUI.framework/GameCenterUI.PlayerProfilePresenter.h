/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/


@class NSString, _TtC12GameCenterUI34LocalPlayerAuthenticationPresenter, _TtC12GameCenterUI17NicknamePresenter;

@interface GameCenterUI.PlayerProfilePresenter : NSObject {

	 playerId;
	 objectGraph;
	 requiredDataPresenter;
	 authenticationPresenter;
	 nicknamePresenter;
	 isUpdating;
	 sections;
	 requiredData;
	 onApplySnapshot;
	 onUpdatePhaseChange;
	 onShowAvatarEditor;
	 onNicknameChanged;

}

@property (readonly,nonatomic) NSString * title; 
@property (readonly,nonatomic) BOOL isSignedIn; 
@property (readonly,nonatomic) _TtC12GameCenterUI34LocalPlayerAuthenticationPresenter * authenticationPresenter; 
@property (retain,nonatomic) _TtC12GameCenterUI17NicknamePresenter * nicknamePresenter; 
@property (assign,nonatomic) BOOL isUpdating; 
-(BOOL)isUpdating;
-(BOOL)isSignedIn;
-(id)init;
-(void)setIsUpdating:(BOOL)arg1 ;
-(_TtC12GameCenterUI34LocalPlayerAuthenticationPresenter *)authenticationPresenter;
-(_TtC12GameCenterUI17NicknamePresenter *)nicknamePresenter;
-(void)setNicknamePresenter:(_TtC12GameCenterUI17NicknamePresenter *)arg1 ;
-(void)setAllowsNearByMultiplayerInvites:(BOOL)arg1 ;
-(void)signIntoGameCenter;
-(void)showAvatarEditor;
-(void)didSignOut;
-(void)updateSnapshot;
-(NSString *)title;
-(id)initWithPlayerId:(id)arg1 ;
@end

