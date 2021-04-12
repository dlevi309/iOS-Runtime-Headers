/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/


@protocol OS_dispatch_group;
@class NSObject;

@interface AFFuture : NSObject {

	NSObject*<OS_dispatch_group> _group;
	id _value;

}
-(id)initAndGetSetterBlock:(/*^block*/id*)arg1 ;
-(id)waitForValue:(unsigned long long)arg1 ;
@end

