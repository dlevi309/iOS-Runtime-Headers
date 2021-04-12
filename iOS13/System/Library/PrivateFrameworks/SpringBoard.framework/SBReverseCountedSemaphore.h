/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol OS_dispatch_group;
@class NSObject;

@interface SBReverseCountedSemaphore : NSObject {

	NSObject*<OS_dispatch_group> _group;

}
-(id)init;
-(void)wait;
-(void)decrement;
-(void)increment;
@end

