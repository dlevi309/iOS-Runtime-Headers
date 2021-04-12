/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
*/


@class NSMutableArray;

@interface IMAllocTracking : NSObject {

	NSMutableArray* _callStacks;

}
-(oneway void)release;
-(id)retain;
-(void)_registerCallstack;
-(void)dealloc;
@end

