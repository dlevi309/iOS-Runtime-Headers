/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RBSGrant.h>

@protocol OS_xpc_object;
@class NSString, NSObject;

@interface RBSEndowmentGrant : RBSGrant {

	NSString* _endowmentNamespace;
	NSObject*<OS_xpc_object> _encodedEndowment;

}

@property (nonatomic,copy,readonly) NSString * endowmentNamespace;                     //@synthesize endowmentNamespace=_endowmentNamespace - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> encodedEndowment;              //@synthesize encodedEndowment=_encodedEndowment - In the implementation block
+(id)grantWithNamespace:(id)arg1 endowment:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)succinctDescriptionBuilder;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(NSString *)endowmentNamespace;
-(NSObject*<OS_xpc_object>)encodedEndowment;
@end

