/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/

#import <PhotoFoundation/PFStateMachineTransition.h>

@class NSString;

@interface PFStateMachineSubflowTransition : PFStateMachineTransition {

	NSString* _subflowName;

}

@property (readonly) NSString * subflowName;              //@synthesize subflowName=_subflowName - In the implementation block
-(id)description;
-(void)performAction:(id)arg1 ;
-(id)destination:(id)arg1 ;
-(id)dot:(id)arg1 prefix:(id)arg2 graph:(id)arg3 ;
-(id)initWithEventName:(id)arg1 subflow:(id)arg2 to:(id)arg3 ;
-(id)returnDestination:(id)arg1 ;
-(NSString *)subflowName;
@end

