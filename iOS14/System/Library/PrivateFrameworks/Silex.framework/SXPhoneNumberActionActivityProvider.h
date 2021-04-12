/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)copy:(id)arg1 ;
-(id<SXHost>)host;
-(void)faceTime:(id)arg1 ;
-(id)activityGroupForAction:(id)arg1 ;
-(id<SXContactsPresenter>)contactsPresenter;
-(void)message:(id)arg1 ;
-(id<SXDeviceCapabilities>)deviceCapabilities;
-(void)call:(id)arg1 showDialog:(BOOL)arg2 ;
-(void)addToContacts:(id)arg1 ;
-(id)initWithHost:(id)arg1 contactsPresenter:(id)arg2 messagePresenter:(id)arg3 deviceCapabilities:(id)arg4 ;
-(id<SXMessagePresenter>)messagePresenter;
@end

