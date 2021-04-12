/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)getAppContextWithDeliveryHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithTaskmaster:(id)arg1 ;
@end

