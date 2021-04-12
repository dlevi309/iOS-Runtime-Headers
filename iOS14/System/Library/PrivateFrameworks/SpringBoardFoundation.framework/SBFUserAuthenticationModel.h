/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/


@protocol SBFUserAuthenticationModel <NSObject>
@property (assign,nonatomic) id<SBFUserAuthenticationModelDelegate> delegate; 
@property (getter=isTemporarilyBlocked,nonatomic,readonly) BOOL temporarilyBlocked; 
@property (getter=isPermanentlyBlocked,nonatomic,readonly) BOOL permanentlyBlocked; 
@property (nonatomic,readonly) double timeUntilUnblockedSinceReferenceDate; 
@optional
-(void)clearBlockedState;
-(void)refreshBlockedState;
-(void)noteNewMkbDeviceLockState:(id)arg1;

@required
-(id<SBFUserAuthenticationModelDelegate>)delegate;
-(double)timeUntilUnblockedSinceReferenceDate;
-(void)notePasscodeUnlockSucceeded;
-(void)setDelegate:(id)arg1;
-(void)notePasscodeEntryCancelled;
-(void)synchronize;
-(void)notePasscodeEntryBegan;
-(void)performPasswordTest:(/*^block*/id)arg1;
-(void)notePasscodeUnlockFailedWithError:(id)arg1;
-(BOOL)isPermanentlyBlocked;
-(BOOL)isTemporarilyBlocked;

@end

