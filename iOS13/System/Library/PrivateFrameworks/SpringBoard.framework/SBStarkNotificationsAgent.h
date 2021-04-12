/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBStarkNotificationsAgent <NSObject>
@property (assign,nonatomic,__weak) id<SBStarkNotificationsAgentDelegate> delegate; 
@property (nonatomic,readonly) id<SBStarkNotificationsConfiguring> activeConfiguration; 
@required
-(id<SBStarkNotificationsAgentDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(id<SBStarkNotificationsConfiguring>)activeConfiguration;
-(id)activeConfigurationForScreen:(id)arg1;
-(void)noteComponentDidActivate:(id)arg1;
-(void)noteComponentDidDeactivate:(id)arg1;

@end

