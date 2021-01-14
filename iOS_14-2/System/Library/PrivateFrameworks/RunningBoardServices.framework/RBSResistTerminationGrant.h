/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RBSGrant.h>

@interface RBSResistTerminationGrant : RBSGrant {

	unsigned char _resistance;

}

@property (nonatomic,readonly) unsigned char resistance;              //@synthesize resistance=_resistance - In the implementation block
+(id)grantWithResistance:(unsigned char)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)description;
-(unsigned char)resistance;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
@end

