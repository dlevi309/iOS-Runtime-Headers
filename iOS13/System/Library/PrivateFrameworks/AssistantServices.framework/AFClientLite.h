/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/


@class AFCallSiteInfo;

@interface AFClientLite : NSObject {

	AFCallSiteInfo* _initiationCallSiteInfo;

}
-(id)init;
-(void)dealloc;
-(void)_handleCommand:(id)arg1 afterCurrentRequest:(BOOL)arg2 isOneWay:(BOOL)arg3 commandHandler:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(void)handleCommand:(id)arg1 afterCurrentRequest:(BOOL)arg2 commandHandler:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)handleOneWayCommand:(id)arg1 commandHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)handleCommand:(id)arg1 commandHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
@end

