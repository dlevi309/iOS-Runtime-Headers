/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/


@protocol ECIMAPLocalActionReplayer
@property (assign,nonatomic,__weak) id<ECIMAPLocalActionReplayerDelegate> delegate; 
@property (nonatomic,retain) id<ECIMAPServerInterface> serverInterface; 
@required
-(id<ECIMAPLocalActionReplayerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(id<ECIMAPServerInterface>)serverInterface;
-(void)setServerInterface:(id)arg1;

@end

