/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/


@class NSError;

@interface FPBlockRecoveryAttempter : NSObject {

	/*^block*/id _recoveryBlock;
	NSError* _expectedError;

}

@property (assign,nonatomic,__weak) NSError * expectedError;              //@synthesize expectedError=_expectedError - In the implementation block
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(NSError *)expectedError;
-(void)setExpectedError:(NSError *)arg1 ;
-(BOOL)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 ;
@end

