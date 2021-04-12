/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RBSProcessIdentity.h>

@class NSString;

@interface RBSEmbeddedAppProcessIdentity : RBSProcessIdentity {

	NSString* _embeddedApplicationIdentifier;

}
-(BOOL)isAnonymous;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)_initEmbeddedAppWithBundleID:(id)arg1 euid:(unsigned)arg2 platform:(int)arg3 ;
-(id)debugDescription;
-(BOOL)isApplication;
-(id)copyWithEuid:(unsigned)arg1 ;
-(id)encodeForJob;
-(id)_initEmbeddedAppWithBundleID:(id)arg1 euid:(unsigned)arg2 platform:(int)arg3 jobLabel:(id)arg4 ;
-(BOOL)isEmbeddedApplication;
-(BOOL)_matchesIdentity:(id)arg1 ;
-(id)embeddedApplicationIdentifier;
-(unsigned char)defaultManageFlags;
@end

