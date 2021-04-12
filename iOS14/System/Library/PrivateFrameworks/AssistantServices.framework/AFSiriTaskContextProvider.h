/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/AFSiriAppContextProviding.h>

@class AFSiriTaskmaster, NSString;

@interface AFSiriTaskContextProvider : NSObject <AFSiriAppContextProviding> {

	AFSiriTaskmaster* _taskmaster;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTaskmaster:(id)arg1 ;
-(void)getAppContextWithDeliveryHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

