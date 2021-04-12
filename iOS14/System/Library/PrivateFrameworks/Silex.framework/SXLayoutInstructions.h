/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@class NSArray;

@interface SXLayoutInstructions : NSObject {

	NSArray* _instructions;

}

@property (nonatomic,readonly) NSArray * instructions;              //@synthesize instructions=_instructions - In the implementation block
+(id)defaultInstructions;
-(NSArray *)instructions;
-(id)description;
-(void)didLayoutComponentBlueprint:(id)arg1 blueprint:(id)arg2 ;
-(BOOL)areFulfilledForBlueprint:(id)arg1 ;
-(id)initWithInstructions:(id)arg1 ;
@end

