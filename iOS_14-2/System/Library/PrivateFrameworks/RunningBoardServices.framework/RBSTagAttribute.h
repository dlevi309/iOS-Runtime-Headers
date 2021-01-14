/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RBSAttribute.h>

@class NSString;

@interface RBSTagAttribute : RBSAttribute {

	NSString* _tag;

}

@property (nonatomic,copy,readonly) NSString * tag;              //@synthesize tag=_tag - In the implementation block
+(id)attributeWithTag:(id)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(NSString *)tag;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
@end

