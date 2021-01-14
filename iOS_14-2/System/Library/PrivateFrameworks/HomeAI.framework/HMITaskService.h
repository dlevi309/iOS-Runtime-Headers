/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSString;

@interface HMITaskService : HMFObject <HMFLogging>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)allowedClasses;
+(id)taskService;
+(id)taskServiceClient;
-(id)initPrivate;
-(int)submitTaskWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)cancelTask:(int)arg1 ;
-(int)submitTask:(id)arg1 completionHander:(/*^block*/id)arg2 ;
@end

