/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/IDSAccountControllerDelegate.h>
#import <libobjc.A.dylib/CRKIDSListener.h>

@class IDSAccountController, NSString;

@interface CRKConcreteIDSAccountAdditionListener : NSObject <IDSAccountControllerDelegate, CRKIDSListener> {

	IDSAccountController* _accountController;
	/*^block*/id _handler;

}

@property (nonatomic,readonly) IDSAccountController * accountController;              //@synthesize accountController=_accountController - In the implementation block
@property (nonatomic,copy) id handler;                                                //@synthesize handler=_handler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)listenerWithServiceName:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setHandler:(id)arg1 ;
-(IDSAccountController *)accountController;
-(void)accountController:(id)arg1 accountAdded:(id)arg2 ;
-(void)invalidate;
-(id)handler;
-(void)dealloc;
-(id)initWithAccountController:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

