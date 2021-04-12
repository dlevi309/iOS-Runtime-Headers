/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RBSAttribute.h>

@interface RBSLegacyAttribute : RBSAttribute {

	unsigned long long _reason;
	unsigned long long _requestedReason;
	unsigned long long _flags;

}

@property (assign,nonatomic) unsigned long long requestedReason;              //@synthesize requestedReason=_requestedReason - In the implementation block
@property (assign,nonatomic) unsigned long long flags;                        //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) unsigned long long reason;                       //@synthesize reason=_reason - In the implementation block
+(id)attributeWithReason:(unsigned long long)arg1 flags:(unsigned long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)reason;
-(unsigned long long)flags;
-(void)setReason:(unsigned long long)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(id)_initWithReason:(unsigned long long)arg1 flags:(unsigned long long)arg2 ;
-(unsigned long long)requestedReason;
-(void)setRequestedReason:(unsigned long long)arg1 ;
-(void)setFlags:(unsigned long long)arg1 ;
@end

