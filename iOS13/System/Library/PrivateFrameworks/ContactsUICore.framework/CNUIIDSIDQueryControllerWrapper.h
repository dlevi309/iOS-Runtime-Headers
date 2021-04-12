/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(IDSIDQueryController *)controller;
-(BOOL)refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(id)initWithController:(id)arg1 ;
@end

