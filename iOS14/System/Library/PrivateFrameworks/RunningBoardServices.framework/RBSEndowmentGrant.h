/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSObject*<OS_xpc_object>)encodedEndowment;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(NSString *)endowmentNamespace;
-(BOOL)isEqual:(id)arg1 ;
@end

