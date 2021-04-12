/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@class NSArray;

@interface SXLayoutInstructions : NSObject {

	NSArray* _instructions;

}

@property (nonatomic,readonly) NSArray * instructions;              //@synthesize instructions=_instructions - In the implementation block
+(id)defaultInstructions;
-(id)description;
-(NSArray *)instructions;
-(void)didLayoutComponentBlueprint:(id)arg1 blueprint:(id)arg2 ;
-(BOOL)areFulfilledForBlueprint:(id)arg1 ;
-(id)initWithInstructions:(id)arg1 ;
@end

