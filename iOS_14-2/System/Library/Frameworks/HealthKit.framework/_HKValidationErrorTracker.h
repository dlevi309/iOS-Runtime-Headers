/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSMutableString *)errorMessage;
-(long long)errorCount;
-(void)setErrorCount:(long long)arg1 ;
-(void)setErrorMessage:(NSMutableString *)arg1 ;
@end

