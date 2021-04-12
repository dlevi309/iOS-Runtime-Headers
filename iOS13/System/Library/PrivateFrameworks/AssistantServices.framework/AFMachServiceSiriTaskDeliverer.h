/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

