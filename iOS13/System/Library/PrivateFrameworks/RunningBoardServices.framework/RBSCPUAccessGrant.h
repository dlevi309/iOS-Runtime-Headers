/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RBSGrant.h>

@interface RBSCPUAccessGrant : RBSGrant {

	unsigned char _role;

}

@property (nonatomic,readonly) unsigned char role;              //@synthesize role=_role - In the implementation block
+(id)grant;
+(id)grantUserInitiated;
+(id)grantWithUserInteractivity;
+(id)grantWithUserInteractivityAndFocus;
+(id)grantWithRole:(unsigned char)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned char)role;
-(id)succinctDescriptionBuilder;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(id)_initWithRole:(unsigned char)arg1 ;
@end

