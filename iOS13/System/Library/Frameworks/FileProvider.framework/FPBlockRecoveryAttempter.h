/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/


@class NSError;

@interface FPBlockRecoveryAttempter : NSObject {

	/*^block*/id _recoveryBlock;
	NSError* _expectedError;

}

@property (assign,nonatomic,__weak) NSError * expectedError;              //@synthesize expectedError=_expectedError - In the implementation block
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(BOOL)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 ;
-(void)setExpectedError:(NSError *)arg1 ;
-(NSError *)expectedError;
@end

