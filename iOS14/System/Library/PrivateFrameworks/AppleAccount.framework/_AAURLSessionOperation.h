/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/


@class NSMutableData, NSData;

@interface _AAURLSessionOperation : NSObject {

	NSMutableData* _mutableData;
	/*^block*/id _completion;

}

@property (nonatomic,copy,readonly) id completion;              //@synthesize completion=_completion - In the implementation block
@property (nonatomic,copy,readonly) NSData * data; 
+(id)operationWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(id)completion;
-(id)initWithCompletion:(/*^block*/id)arg1 ;
-(NSData *)data;
-(void)appendData:(id)arg1 ;
-(void)invokeCompletionWithResponse:(id)arg1 error:(id)arg2 ;
@end

