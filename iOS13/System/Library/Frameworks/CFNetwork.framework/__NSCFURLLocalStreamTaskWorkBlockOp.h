/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/__NSCFURLLocalStreamTaskWork.h>

@interface __NSCFURLLocalStreamTaskWorkBlockOp : __NSCFURLLocalStreamTaskWork {

	/*^block*/id _block;
	BOOL _shouldWaitForTls;

}
+(id)opWithBlock:(/*^block*/id)arg1 description:(const char*)arg2 ;
-(void)dealloc;
-(void)executeBlock;
-(BOOL)shouldWaitForTLS;
-(void)markBlockAsWaitingOnTls:(BOOL)arg1 ;
@end

