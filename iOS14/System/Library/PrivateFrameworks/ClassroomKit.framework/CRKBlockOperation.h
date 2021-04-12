/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATOperation.h>

@interface CRKBlockOperation : CATOperation {

	/*^block*/id _operationBlock;

}

@property (nonatomic,readonly) id operationBlock;              //@synthesize operationBlock=_operationBlock - In the implementation block
+(id)blockOperationWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isAsynchronous;
-(void)main;
-(id)operationBlock;
-(void)cancel;
-(id)initWithOperationBlock:(/*^block*/id)arg1 ;
@end

