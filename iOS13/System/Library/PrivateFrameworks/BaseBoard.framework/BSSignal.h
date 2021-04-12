/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/


@interface BSSignal : NSObject {

	BOOL _signalled;

}
-(id)init;
-(void)signal;
-(void)reset;
-(BOOL)hasBeenSignalled;
@end

