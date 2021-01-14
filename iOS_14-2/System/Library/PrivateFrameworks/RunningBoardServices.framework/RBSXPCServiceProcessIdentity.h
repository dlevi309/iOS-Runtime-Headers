/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RBSProcessIdentity.h>

@class RBSXPCServiceIdentity;

@interface RBSXPCServiceProcessIdentity : RBSProcessIdentity {

	RBSXPCServiceIdentity* _serviceIdentity;

}
+(BOOL)shouldManageExtensionWithExtensionPoint:(id)arg1 ;
-(BOOL)isAnonymous;
-(id)uuid;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)hostIdentifier;
-(BOOL)isXPCService;
-(id)copyWithEuid:(unsigned)arg1 ;
-(id)initWithDecodeFromJob:(id)arg1 ;
-(id)encodeForJob;
-(id)xpcServiceIdentifier;
-(unsigned long long)hash;
-(id)hostIdentity;
-(BOOL)_matchesIdentity:(id)arg1 ;
-(id)_initWithXPCServiceID:(id)arg1 pid:(int)arg2 euid:(unsigned)arg3 ;
-(BOOL)isExtension;
-(BOOL)inheritsCoalitionBand;
-(unsigned char)defaultManageFlags;
-(BOOL)isEqualToIdentity:(id)arg1 ;
@end

