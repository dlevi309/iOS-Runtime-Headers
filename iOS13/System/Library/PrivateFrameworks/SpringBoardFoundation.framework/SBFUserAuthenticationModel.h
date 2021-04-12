/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/


@protocol SBFUserAuthenticationModel <NSObject>
@property (assign,nonatomic) id<SBFUserAuthenticationModelDelegate> delegate; 
@property (getter=isTemporarilyBlocked,nonatomic,readonly) BOOL temporarilyBlocked; 
@property (getter=isPermanentlyBlocked,nonatomic,readonly) BOOL permanentlyBlocked; 
@property (nonatomic,readonly) double timeUntilUnblockedSinceReferenceDate; 
@optional
-(void)noteNewMkbDeviceLockState:(id)arg1;
-(void)refreshBlockedState;
-(void)clearBlockedState;

@required
-(void)synchronize;
-(id<SBFUserAuthenticationModelDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)notePasscodeEntryBegan;
-(void)notePasscodeEntryCancelled;
-(void)notePasscodeUnlockSucceeded;
-(void)notePasscodeUnlockFailedWithError:(id)arg1;
-(void)performPasswordTest:(/*^block*/id)arg1;
-(BOOL)isTemporarilyBlocked;
-(double)timeUntilUnblockedSinceReferenceDate;
-(BOOL)isPermanentlyBlocked;

@end

