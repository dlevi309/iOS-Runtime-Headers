/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
*/


@interface MAProgressNotification : NSObject {

	BOOL _isStalled;
	long long _totalExpected;
	long long _totalWritten;
	double _expectedTimeRemaining;

}

@property (assign,nonatomic) long long totalExpected;                   //@synthesize totalExpected=_totalExpected - In the implementation block
@property (assign,nonatomic) long long totalWritten;                    //@synthesize totalWritten=_totalWritten - In the implementation block
@property (assign,nonatomic) BOOL isStalled;                            //@synthesize isStalled=_isStalled - In the implementation block
@property (assign,nonatomic) double expectedTimeRemaining;              //@synthesize expectedTimeRemaining=_expectedTimeRemaining - In the implementation block
-(long long)totalExpected;
-(long long)totalWritten;
-(double)expectedTimeRemaining;
-(BOOL)isStalled;
-(void)setTotalWritten:(long long)arg1 ;
-(void)setTotalExpected:(long long)arg1 ;
-(void)setExpectedTimeRemaining:(double)arg1 ;
-(void)setIsStalled:(BOOL)arg1 ;
@end

