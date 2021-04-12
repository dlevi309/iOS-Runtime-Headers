/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

