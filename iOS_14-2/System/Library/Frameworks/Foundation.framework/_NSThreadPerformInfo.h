/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@class NSMutableArray, NSCondition;

@interface _NSThreadPerformInfo : NSObject {

	id target;
	SEL selector;
	id argument;
	NSMutableArray* modes;
	NSCondition* waiter;
	char* signalled;

}
-(void)dealloc;
@end

