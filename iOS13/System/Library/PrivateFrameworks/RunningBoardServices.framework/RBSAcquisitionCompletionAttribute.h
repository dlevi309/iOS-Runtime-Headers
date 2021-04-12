/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RBSAttribute.h>

@interface RBSAcquisitionCompletionAttribute : RBSAttribute {

	unsigned long long _policy;

}

@property (nonatomic,readonly) unsigned long long policy;              //@synthesize policy=_policy - In the implementation block
+(id)attributeWithCompletionPolicy:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)policy;
-(id)succinctDescriptionBuilder;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(id)_initWithCompletionPolicy:(unsigned long long)arg1 ;
@end

