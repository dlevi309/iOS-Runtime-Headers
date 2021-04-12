/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <libobjc.A.dylib/NSExtensionRequestHandling.h>

@class NSString;

@interface HKBackgroundObservationExtension : NSObject <NSExtensionRequestHandling>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)beginRequestWithExtensionContext:(id)arg1 ;
-(void)didReceiveUpdateForSampleType:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)backgroundObservationExtensionTimeWillExpire;
@end

