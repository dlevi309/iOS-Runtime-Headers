/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

