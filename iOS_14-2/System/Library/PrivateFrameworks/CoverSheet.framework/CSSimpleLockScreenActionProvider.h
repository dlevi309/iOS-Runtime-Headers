/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(SBFLockScreenActionContext *)lockScreenActionContext;
-(void)invalidateLockScreenActionContext;
-(void)setLockScreenActionContext:(SBFLockScreenActionContext *)arg1 ;
@end

