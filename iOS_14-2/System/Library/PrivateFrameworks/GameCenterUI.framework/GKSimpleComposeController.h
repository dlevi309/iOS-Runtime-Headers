/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GKBaseComposeController.h>

@class GKComposeHeaderWithStaticRecipients, NSString, NSArray;

@interface GKSimpleComposeController : GKBaseComposeController {

	GKComposeHeaderWithStaticRecipients* _toField;
	NSString* _defaultMessage;
	NSArray* _players;
	/*^block*/id _doneHandler;

}

@property (nonatomic,retain) GKComposeHeaderWithStaticRecipients * toField;              //@synthesize toField=_toField - In the implementation block
@property (nonatomic,retain) NSString * defaultMessage;                                  //@synthesize defaultMessage=_defaultMessage - In the implementation block
@property (nonatomic,retain) NSArray * players;                                          //@synthesize players=_players - In the implementation block
@property (nonatomic,copy) id doneHandler;                                               //@synthesize doneHandler=_doneHandler - In the implementation block
-(NSArray *)players;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setDoneHandler:(id)arg1 ;
-(GKComposeHeaderWithStaticRecipients *)toField;
-(void)setPlayers:(NSArray *)arg1 ;
-(void)donePressed;
-(void)setToField:(GKComposeHeaderWithStaticRecipients *)arg1 ;
-(void)setupSendButton;
-(id)doneHandler;
-(NSString *)defaultMessage;
-(void)pushOntoNavigationController:(id)arg1 withDoneHandler:(/*^block*/id)arg2 ;
-(void)setDefaultMessage:(NSString *)arg1 ;
-(void)loadView;
-(void)dealloc;
@end

