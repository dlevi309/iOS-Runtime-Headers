/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSString, VSOptional;

@interface VSAppInstallationOperation : VSAsyncOperation {

	NSString* _buyParams;
	VSOptional* _result;

}

@property (nonatomic,retain) VSOptional * result;              //@synthesize result=_result - In the implementation block
@property (nonatomic,copy) NSString * buyParams;               //@synthesize buyParams=_buyParams - In the implementation block
-(void)setResult:(VSOptional *)arg1 ;
-(void)executionDidBegin;
-(id)init;
-(void)setBuyParams:(NSString *)arg1 ;
-(VSOptional *)result;
-(NSString *)buyParams;
@end

