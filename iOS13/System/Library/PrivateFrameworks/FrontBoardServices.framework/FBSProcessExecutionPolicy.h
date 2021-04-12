/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(FBSProcessExecutionStrategy *)strategy;
-(void)setStrategy:(FBSProcessExecutionStrategy *)arg1 ;
-(NSArray *)provisions;
-(void)setProvisions:(NSArray *)arg1 ;
@end

