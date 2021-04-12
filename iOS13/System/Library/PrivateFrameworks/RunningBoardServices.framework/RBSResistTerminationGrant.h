/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RBSGrant.h>

@interface RBSResistTerminationGrant : RBSGrant {

	unsigned char _resistance;

}

@property (nonatomic,readonly) unsigned char resistance;              //@synthesize resistance=_resistance - In the implementation block
+(id)grantWithResistance:(unsigned char)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)succinctDescriptionBuilder;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(id)_initWithResistance:(unsigned char)arg1 ;
-(unsigned char)resistance;
@end

