/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RBSGrant.h>

@interface RBSSuspendableCPUGrant : RBSGrant {

	unsigned char _role;

}

@property (nonatomic,readonly) unsigned char role;              //@synthesize role=_role - In the implementation block
+(id)grantWithRole:(unsigned char)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)_initWithRole:(unsigned char)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(unsigned char)role;
-(BOOL)isEqual:(id)arg1 ;
@end

