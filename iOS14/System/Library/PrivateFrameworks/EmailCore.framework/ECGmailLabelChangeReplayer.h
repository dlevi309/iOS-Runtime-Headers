/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/

#import <EmailCore/ECLocalActionReplayer.h>
#import <libobjc.A.dylib/ECIMAPLocalActionReplayer.h>

@protocol ECIMAPServerInterface;
@interface ECGmailLabelChangeReplayer : ECLocalActionReplayer <ECIMAPLocalActionReplayer> {

	id<ECIMAPServerInterface> serverInterface;

}

@property (assign,nonatomic,__weak) id<ECIMAPLocalActionReplayerDelegate> delegate; 
@property (nonatomic,retain) id<ECIMAPServerInterface> serverInterface; 
-(id<ECIMAPServerInterface>)serverInterface;
-(id)replayAction;
-(void)setServerInterface:(id<ECIMAPServerInterface>)arg1 ;
@end

