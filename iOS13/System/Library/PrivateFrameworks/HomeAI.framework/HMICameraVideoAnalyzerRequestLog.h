/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMICameraVideoAnalyzerRequest, NSString;

@interface HMICameraVideoAnalyzerRequestLog : HMFObject <HMFLogging> {

	HMICameraVideoAnalyzerRequest* _request;

}

@property (__weak,readonly) HMICameraVideoAnalyzerRequest * request;              //@synthesize request=_request - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)stringWithFormat:(id)arg1 ;
-(HMICameraVideoAnalyzerRequest *)request;
-(id)initWithRequest:(id)arg1 ;
-(void)info:(id)arg1 ;
-(void)debug:(id)arg1 ;
@end

