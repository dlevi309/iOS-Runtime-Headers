/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/AFSiriTaskDelivering.h>

@class NSString;

@interface AFMachServiceSiriTaskDeliverer : NSObject <AFSiriTaskDelivering> {

	NSString* _machServiceName;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)machServiceSiriTaskDelivererForAppWithBundleIdentifier:(id)arg1 ;
-(NSString *)description;
-(id)initWithMachServiceName:(id)arg1 ;
-(void)deliverSiriTask:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

