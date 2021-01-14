/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <libobjc.A.dylib/CNUIIDSIDQueryControllerWrapper.h>

@protocol CNUIIDSIDQueryControllerWrapper
@required
-(BOOL)refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(/*^block*/id)arg5;

@end


@class IDSIDQueryController;

@interface CNUIIDSIDQueryControllerWrapper : NSObject <CNUIIDSIDQueryControllerWrapper> {

	IDSIDQueryController* _controller;

}

@property (nonatomic,readonly) IDSIDQueryController * controller;              //@synthesize controller=_controller - In the implementation block
-(BOOL)refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(id)initWithController:(id)arg1 ;
-(IDSIDQueryController *)controller;
@end

