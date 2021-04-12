/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/IDSAccountDelegate.h>
#import <libobjc.A.dylib/CRKIDSListener.h>

@class IDSAccount, NSString;

@interface CRKConcreteIDSAccountActiveListener : NSObject <IDSAccountDelegate, CRKIDSListener> {

	IDSAccount* _account;
	/*^block*/id _handler;

}

@property (nonatomic,readonly) IDSAccount * account;                //@synthesize account=_account - In the implementation block
@property (nonatomic,copy) id handler;                              //@synthesize handler=_handler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)listenerWithAccount:(id)arg1 handler:(/*^block*/id)arg2 ;
-(IDSAccount *)account;
-(void)account:(id)arg1 isActiveChanged:(BOOL)arg2 ;
-(void)setHandler:(id)arg1 ;
-(void)invalidate;
-(id)handler;
-(void)dealloc;
-(id)initWithAccount:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

