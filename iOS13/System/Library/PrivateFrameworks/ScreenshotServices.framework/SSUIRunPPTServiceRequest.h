/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
*/

#import <ScreenshotServices/SSUIServiceRequest.h>

@class NSString;

@interface SSUIRunPPTServiceRequest : SSUIServiceRequest {

	NSString* _testName;

}

@property (nonatomic,copy) NSString * testName;              //@synthesize testName=_testName - In the implementation block
+(id)entitlement;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(NSString *)testName;
-(void)setTestName:(NSString *)arg1 ;
@end

