/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


@class IMUnitTestLogger;

@interface IMUnitTestBundleLoader : NSObject {

	IMUnitTestLogger* _logger;

}

@property (readonly) IMUnitTestLogger * logger;              //@synthesize logger=_logger - In the implementation block
-(IMUnitTestLogger *)logger;
-(id)initWithLogger:(id)arg1 ;
-(BOOL)loadTestBundle:(id)arg1 bundle:(id*)arg2 error:(id*)arg3 ;
@end

