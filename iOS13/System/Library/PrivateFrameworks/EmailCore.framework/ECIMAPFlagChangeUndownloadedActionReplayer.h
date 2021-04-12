/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/

#import <EmailCore/ECLocalActionReplayer.h>
#import <libobjc.A.dylib/ECIMAPLocalActionReplayer.h>

@protocol ECIMAPServerInterface, ECIMAPLocalActionReplayerDelegate;
@interface ECIMAPFlagChangeUndownloadedActionReplayer : ECLocalActionReplayer <ECIMAPLocalActionReplayer> {

	id<ECIMAPServerInterface> serverInterface;
	id<ECIMAPLocalActionReplayerDelegate> delegate;

}

@property (assign,nonatomic,__weak) id<ECIMAPLocalActionReplayerDelegate> delegate; 
@property (nonatomic,retain) id<ECIMAPServerInterface> serverInterface; 
-(id<ECIMAPLocalActionReplayerDelegate>)delegate;
-(void)setDelegate:(id<ECIMAPLocalActionReplayerDelegate>)arg1 ;
-(id<ECIMAPServerInterface>)serverInterface;
-(id)replayAction;
-(void)setServerInterface:(id<ECIMAPServerInterface>)arg1 ;
@end

