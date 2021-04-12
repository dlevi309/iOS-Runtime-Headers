/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class SBFMobileKeyBag;

@interface SBDataRecoveryController : NSObject {

	SBFMobileKeyBag* _mobileKeyBag;

}

@property (nonatomic,readonly) BOOL dataRecoveryRequired; 
-(id)init;
-(BOOL)dataRecoveryRequired;
-(void)performDataRecovery;
-(id)initWithMobileKeyBag:(id)arg1 ;
@end

