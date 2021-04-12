/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <libobjc.A.dylib/SBFUserAuthenticationModel.h>

@protocol SBFUserAuthenticationModelDelegate;
@class SBFMobileKeyBag, NSString;

@interface SBFUserAuthenticationModelEducationalMode : NSObject <SBFUserAuthenticationModel> {

	SBFMobileKeyBag* _keybag;
	BOOL _pendingWipe;
	id<SBFUserAuthenticationModelDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<SBFUserAuthenticationModelDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (getter=isTemporarilyBlocked,nonatomic,readonly) BOOL temporarilyBlocked; 
@property (getter=isPermanentlyBlocked,nonatomic,readonly) BOOL permanentlyBlocked; 
@property (nonatomic,readonly) double timeUntilUnblockedSinceReferenceDate; 
-(void)synchronize;
-(id<SBFUserAuthenticationModelDelegate>)delegate;
-(void)setDelegate:(id<SBFUserAuthenticationModelDelegate>)arg1 ;
-(id)initWithKeyBag:(id)arg1 ;
-(void)notePasscodeEntryBegan;
-(void)notePasscodeEntryCancelled;
-(void)noteNewMkbDeviceLockState:(id)arg1 ;
-(void)notePasscodeUnlockSucceeded;
-(void)notePasscodeUnlockFailedWithError:(id)arg1 ;
-(void)performPasswordTest:(/*^block*/id)arg1 ;
-(BOOL)isTemporarilyBlocked;
-(double)timeUntilUnblockedSinceReferenceDate;
-(BOOL)isPermanentlyBlocked;
-(id)_refreshStateAndNotify:(BOOL)arg1 ;
-(void)_refreshStateForMkbState:(id)arg1 notify:(BOOL)arg2 ;
@end

