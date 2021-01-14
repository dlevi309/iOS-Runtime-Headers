/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RBSAttribute.h>

@interface RBSAcquisitionCompletionAttribute : RBSAttribute {

	unsigned long long _policy;

}

@property (nonatomic,readonly) unsigned long long policy;              //@synthesize policy=_policy - In the implementation block
+(id)attributeWithCompletionPolicy:(unsigned long long)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(unsigned long long)policy;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
@end

