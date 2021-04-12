/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
*/


#import <CommunicationsSetupUI/CommunicationsSetupUI-Structs.h>
@class NSString;

@interface FTRegConnectionHandler : NSObject {

	long long _serviceType;
	unsigned _caps;
	NSString* _name;
	NSString* _listenerID;
	NSString* _logName;
	struct {
		unsigned listeningForNotifications : 1;
	}  _handlerFlags;

}

@property (assign,nonatomic) long long serviceType;                                    //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,copy) NSString * name;                                            //@synthesize name=_name - In the implementation block
@property (nonatomic,retain,readonly) NSString * _serviceName; 
@property (nonatomic,retain) NSString * _logName;                                      //@synthesize logName=_logName - In the implementation block
@property (setter=_setListenerID:,nonatomic,copy) NSString * _listenerID;              //@synthesize listenerID=_listenerID - In the implementation block
@property (assign,nonatomic) unsigned caps;                                            //@synthesize caps=_caps - In the implementation block
-(NSString *)_serviceName;
-(void)_setListenerID:(id)arg1 ;
-(unsigned)caps;
-(BOOL)connectToDaemon;
-(BOOL)connectToDaemon:(BOOL)arg1 ;
-(void)setServiceType:(long long)arg1 ;
-(NSString *)name;
-(void)_handleDaemonConnected:(id)arg1 ;
-(void)_handleDaemonDisconnected:(id)arg1 ;
-(void)_startListeningForNotifications;
-(void)_stopListeningForNotifications;
-(NSString *)_logName;
-(void)setName:(NSString *)arg1 ;
-(long long)serviceType;
-(NSString *)_listenerID;
-(void)dealloc;
-(void)_disconnectFromDaemon;
-(id)initWithServiceType:(long long)arg1 name:(id)arg2 ;
-(BOOL)isConnectedToDaemon;
-(void)setCaps:(unsigned)arg1 ;
-(void)set_logName:(NSString *)arg1 ;
-(id)initWithServiceType:(long long)arg1 name:(id)arg2 capabilities:(unsigned)arg3 ;
-(BOOL)_isServiceSupported;
@end

