/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXActionActivityProvider.h>

@protocol SXHost, SXContactsPresenter, SXMessagePresenter, SXDeviceCapabilities;
@class NSString;

@interface SXPhoneNumberActionActivityProvider : NSObject <SXActionActivityProvider> {

	id<SXHost> _host;
	id<SXContactsPresenter> _contactsPresenter;
	id<SXMessagePresenter> _messagePresenter;
	id<SXDeviceCapabilities> _deviceCapabilities;

}

@property (nonatomic,readonly) id<SXHost> host;                                          //@synthesize host=_host - In the implementation block
@property (nonatomic,readonly) id<SXContactsPresenter> contactsPresenter;                //@synthesize contactsPresenter=_contactsPresenter - In the implementation block
@property (nonatomic,readonly) id<SXMessagePresenter> messagePresenter;                  //@synthesize messagePresenter=_messagePresenter - In the implementation block
@property (nonatomic,readonly) id<SXDeviceCapabilities> deviceCapabilities;              //@synthesize deviceCapabilities=_deviceCapabilities - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXHost>)host;
-(void)copy:(id)arg1 ;
-(id<SXDeviceCapabilities>)deviceCapabilities;
-(id)activityGroupForAction:(id)arg1 ;
-(void)addToContacts:(id)arg1 ;
-(id<SXContactsPresenter>)contactsPresenter;
-(id)initWithHost:(id)arg1 contactsPresenter:(id)arg2 messagePresenter:(id)arg3 deviceCapabilities:(id)arg4 ;
-(void)call:(id)arg1 showDialog:(BOOL)arg2 ;
-(void)faceTime:(id)arg1 ;
-(id<SXMessagePresenter>)messagePresenter;
-(void)message:(id)arg1 ;
@end

