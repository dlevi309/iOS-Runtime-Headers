/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

