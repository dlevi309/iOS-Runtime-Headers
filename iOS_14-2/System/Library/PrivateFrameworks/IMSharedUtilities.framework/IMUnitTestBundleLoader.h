/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


@class IMUnitTestLogger;

@interface IMUnitTestBundleLoader : NSObject {

	IMUnitTestLogger* _logger;

}

@property (readonly) IMUnitTestLogger * logger;              //@synthesize logger=_logger - In the implementation block
-(id)initWithLogger:(id)arg1 ;
-(BOOL)loadTestBundle:(id)arg1 bundle:(id*)arg2 error:(id*)arg3 ;
-(IMUnitTestLogger *)logger;
@end

