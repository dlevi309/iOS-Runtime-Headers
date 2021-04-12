/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@class NSMutableString;

@interface _HKValidationErrorTracker : NSObject {

	long long _errorCount;
	NSMutableString* _errorMessage;

}

@property (assign,nonatomic) long long errorCount;                        //@synthesize errorCount=_errorCount - In the implementation block
@property (nonatomic,retain) NSMutableString * errorMessage;              //@synthesize errorMessage=_errorMessage - In the implementation block
-(id)init;
-(long long)errorCount;
-(NSMutableString *)errorMessage;
-(void)setErrorCount:(long long)arg1 ;
-(void)setErrorMessage:(NSMutableString *)arg1 ;
@end

