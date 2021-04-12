/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <libobjc.A.dylib/SBLockScreenActionProvider.h>

@class SBFLockScreenActionContext, NSString;

@interface CSSimpleLockScreenActionProvider : NSObject <SBLockScreenActionProvider> {

	SBFLockScreenActionContext* _lockScreenActionContext;

}

@property (nonatomic,retain) SBFLockScreenActionContext * lockScreenActionContext;              //@synthesize lockScreenActionContext=_lockScreenActionContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLockScreenActionContext:(SBFLockScreenActionContext *)arg1 ;
-(SBFLockScreenActionContext *)lockScreenActionContext;
-(void)invalidateLockScreenActionContext;
@end

