/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RBSAttribute.h>

@interface RBSLegacyAttribute : RBSAttribute {

	unsigned long long _reason;
	unsigned long long _requestedReason;
	unsigned long long _flags;

}

@property (assign,nonatomic) unsigned long long reason;                         //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) unsigned long long requestedReason; 
@property (nonatomic,readonly) unsigned long long flags; 
+(id)attributeWithReason:(unsigned long long)arg1 flags:(unsigned long long)arg2 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(unsigned long long)flags;
-(id)description;
-(unsigned long long)reason;
-(unsigned long long)requestedReason;
-(unsigned long long)hash;
-(void)setReason:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

