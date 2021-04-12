/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATOperation.h>

@interface CRKBlockOperation : CATOperation {

	/*^block*/id _operationBlock;

}

@property (nonatomic,readonly) id operationBlock;              //@synthesize operationBlock=_operationBlock - In the implementation block
+(id)blockOperationWithBlock:(/*^block*/id)arg1 ;
-(void)cancel;
-(void)main;
-(BOOL)isAsynchronous;
-(id)operationBlock;
-(id)initWithOperationBlock:(/*^block*/id)arg1 ;
@end

