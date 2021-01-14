/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (assign,nonatomic) id<SBFUserAuthenticationModelDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (getter=isTemporarilyBlocked,nonatomic,readonly) BOOL temporarilyBlocked; 
@property (getter=isPermanentlyBlocked,nonatomic,readonly) BOOL permanentlyBlocked; 
@property (nonatomic,readonly) double timeUntilUnblockedSinceReferenceDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SBFUserAuthenticationModelDelegate>)delegate;
-(void)_refreshStateForMkbState:(id)arg1 notify:(BOOL)arg2 ;
-(double)timeUntilUnblockedSinceReferenceDate;
-(void)notePasscodeUnlockSucceeded;
-(void)setDelegate:(id<SBFUserAuthenticationModelDelegate>)arg1 ;
-(void)notePasscodeEntryCancelled;
-(void)synchronize;
-(id)initWithKeyBag:(id)arg1 ;
-(void)notePasscodeEntryBegan;
-(void)performPasswordTest:(/*^block*/id)arg1 ;
-(void)notePasscodeUnlockFailedWithError:(id)arg1 ;
-(void)noteNewMkbDeviceLockState:(id)arg1 ;
-(BOOL)isPermanentlyBlocked;
-(id)_refreshStateAndNotify:(BOOL)arg1 ;
-(BOOL)isTemporarilyBlocked;
@end

