/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/


@class NSOperation;

@interface VSAccountManagerResult : NSObject {

	NSOperation* _operation;

}

@property (nonatomic,retain) NSOperation * operation;              //@synthesize operation=_operation - In the implementation block
-(id)init;
-(void)cancel;
-(NSOperation *)operation;
-(void)setOperation:(NSOperation *)arg1 ;
-(id)initWithOperation:(id)arg1 ;
@end

