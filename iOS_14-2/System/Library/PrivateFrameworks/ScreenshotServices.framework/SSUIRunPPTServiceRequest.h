/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
*/

#import <ScreenshotServices/SSUIServiceRequest.h>

@class NSString;

@interface SSUIRunPPTServiceRequest : SSUIServiceRequest {

	NSString* _testName;
	unsigned long long _numberOfRequiredScreenshots;

}

@property (nonatomic,copy) NSString * testName;                                           //@synthesize testName=_testName - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfRequiredScreenshots;              //@synthesize numberOfRequiredScreenshots=_numberOfRequiredScreenshots - In the implementation block
+(id)entitlement;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)setTestName:(NSString *)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(NSString *)testName;
-(unsigned long long)numberOfRequiredScreenshots;
-(void)setNumberOfRequiredScreenshots:(unsigned long long)arg1 ;
@end

