/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/POPAnimatableProperty.h>

@class NSString;

@interface POPConcreteAnimatableProperty : POPAnimatableProperty {

	NSString* name;
	/*^block*/id readBlock;
	/*^block*/id writeBlock;
	double threshold;

}
-(double)threshold;
-(/*^block*/id)writeBlock;
-(id)name;
-(/*^block*/id)readBlock;
-(id)initWithName:(id)arg1 readBlock:(/*^block*/id)arg2 writeBlock:(/*^block*/id)arg3 threshold:(double)arg4 ;
@end

