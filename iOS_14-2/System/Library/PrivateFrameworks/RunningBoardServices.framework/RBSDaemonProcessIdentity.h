/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RBSProcessIdentity.h>

@class NSString;

@interface RBSDaemonProcessIdentity : RBSProcessIdentity {

	NSString* _daemonJobLabel;

}
-(BOOL)isDaemon;
-(BOOL)isAnonymous;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)debugDescription;
-(id)daemonJobLabel;
-(id)copyWithEuid:(unsigned)arg1 ;
-(id)_initDaemonWithJobLabel:(id)arg1 pid:(int)arg2 euid:(unsigned)arg3 ;
-(BOOL)_matchesIdentity:(id)arg1 ;
@end

