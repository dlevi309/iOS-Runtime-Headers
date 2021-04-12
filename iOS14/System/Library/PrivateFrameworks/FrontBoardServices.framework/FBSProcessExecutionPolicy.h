/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class FBSProcessExecutionStrategy, NSArray, NSString;

@interface FBSProcessExecutionPolicy : NSObject <NSCopying, BSDescriptionProviding> {

	FBSProcessExecutionStrategy* _strategy;
	NSArray* _provisions;

}

@property (nonatomic,copy) FBSProcessExecutionStrategy * strategy;              //@synthesize strategy=_strategy - In the implementation block
@property (nonatomic,copy) NSArray * provisions;                                //@synthesize provisions=_provisions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)policyForStrategy:(id)arg1 withProvisions:(id)arg2 ;
-(id)succinctDescription;
-(void)setStrategy:(FBSProcessExecutionStrategy *)arg1 ;
-(FBSProcessExecutionStrategy *)strategy;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)description;
-(NSArray *)provisions;
-(void)setProvisions:(NSArray *)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

