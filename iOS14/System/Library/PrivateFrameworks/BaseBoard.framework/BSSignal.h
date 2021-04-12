/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/


@interface BSSignal : NSObject {

	BOOL _signalled;

}
-(id)init;
-(void)reset;
-(void)signal;
-(BOOL)hasBeenSignalled;
@end

