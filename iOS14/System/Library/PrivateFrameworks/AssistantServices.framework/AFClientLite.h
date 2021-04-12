/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/


@class AFCallSiteInfo;

@interface AFClientLite : NSObject {

	AFCallSiteInfo* _initiationCallSiteInfo;

}
-(id)init;
-(void)_handleCommand:(id)arg1 afterCurrentRequest:(BOOL)arg2 isOneWay:(BOOL)arg3 commandHandler:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(void)handleCommand:(id)arg1 afterCurrentRequest:(BOOL)arg2 commandHandler:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)handleOneWayCommand:(id)arg1 commandHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)handleCommand:(id)arg1 commandHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)dealloc;
@end

