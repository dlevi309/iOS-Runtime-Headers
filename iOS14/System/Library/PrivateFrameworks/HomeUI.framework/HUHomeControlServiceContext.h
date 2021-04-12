/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@protocol SBUIRemoteAlertHostInterface;
@class NSString, NSURL;

@interface HUHomeControlServiceContext : NSObject {

	id<SBUIRemoteAlertHostInterface> _remoteViewControllerProxy;
	NSString* _homeIdentifier;
	NSString* _roomIdentifier;
	unsigned long long _serviceType;
	NSString* _homeName;
	NSString* _roomName;
	NSURL* _defaultActionURL;

}

@property (nonatomic,retain) NSString * homeIdentifier;                                               //@synthesize homeIdentifier=_homeIdentifier - In the implementation block
@property (nonatomic,retain) NSString * roomIdentifier;                                               //@synthesize roomIdentifier=_roomIdentifier - In the implementation block
@property (nonatomic,copy) NSString * homeName;                                                       //@synthesize homeName=_homeName - In the implementation block
@property (nonatomic,copy) NSString * roomName;                                                       //@synthesize roomName=_roomName - In the implementation block
@property (nonatomic,copy) NSURL * defaultActionURL;                                                  //@synthesize defaultActionURL=_defaultActionURL - In the implementation block
@property (assign,nonatomic) unsigned long long serviceType;                                          //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,retain) id<SBUIRemoteAlertHostInterface> remoteViewControllerProxy;              //@synthesize remoteViewControllerProxy=_remoteViewControllerProxy - In the implementation block
+(id)_homeInfoFromDefaultActionURL:(id)arg1 ;
-(void)setDefaultActionURL:(NSURL *)arg1 ;
-(NSURL *)defaultActionURL;
-(id)userInfo;
-(id)initWithServiceType:(unsigned long long)arg1 home:(id)arg2 room:(id)arg3 ;
-(void)setRoomName:(NSString *)arg1 ;
-(void)setServiceType:(unsigned long long)arg1 ;
-(void)setHomeName:(NSString *)arg1 ;
-(NSString *)roomIdentifier;
-(void)setRoomIdentifier:(NSString *)arg1 ;
-(NSString *)homeIdentifier;
-(void)setHomeIdentifier:(NSString *)arg1 ;
-(NSString *)homeName;
-(NSString *)roomName;
-(void)setRemoteViewControllerProxy:(id<SBUIRemoteAlertHostInterface>)arg1 ;
-(id<SBUIRemoteAlertHostInterface>)remoteViewControllerProxy;
-(unsigned long long)serviceType;
-(id)initWithServiceType:(unsigned long long)arg1 homeIdentifier:(id)arg2 roomIdentifier:(id)arg3 ;
-(id)_initWithUserInfo:(id)arg1 ;
-(id)initWithServiceType:(unsigned long long)arg1 defaultActionURL:(id)arg2 ;
-(id)initWithAlertConfigurationContext:(id)arg1 ;
@end

