/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RBSProcessIdentity.h>

@class NSString;

@interface RBSAppProcessIdentity : RBSProcessIdentity {

	NSString* _embeddedApplicationIdentifier;
	NSString* _applicationJobLabel;

}
-(BOOL)isAnonymous;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)debugDescription;
-(id)applicationJobLabel;
-(id)_initAppWithLabel:(id)arg1 bundleID:(id)arg2 euid:(unsigned)arg3 platform:(int)arg4 ;
-(BOOL)isApplication;
-(id)copyWithEuid:(unsigned)arg1 ;
-(id)encodeForJob;
-(BOOL)_matchesIdentity:(id)arg1 ;
-(id)embeddedApplicationIdentifier;
-(unsigned char)defaultManageFlags;
@end

