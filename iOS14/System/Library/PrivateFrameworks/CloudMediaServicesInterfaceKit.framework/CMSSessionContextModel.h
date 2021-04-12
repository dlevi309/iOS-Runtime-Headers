/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudMediaServicesInterfaceKit.framework/CloudMediaServicesInterfaceKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString, NSDictionary;

@interface CMSSessionContextModel : NSObject <NSSecureCoding> {

	BOOL _homeKitAllowExplicitContentSetting;
	BOOL _homeKitUpdateListeningHistorySetting;
	BOOL _serviceUpdateListeningHistory;
	NSURL* _serverOverrideURL;
	NSString* _serverEnvironmentOverride;
	NSString* _sessionAuthHeaderOverride;
	NSString* _serviceID;
	NSString* _homeUserID;
	NSDictionary* _serviceUpdateListeningHistoryAllUsers;

}

@property (nonatomic,copy) NSURL * serverOverrideURL;                                           //@synthesize serverOverrideURL=_serverOverrideURL - In the implementation block
@property (nonatomic,copy) NSString * serverEnvironmentOverride;                                //@synthesize serverEnvironmentOverride=_serverEnvironmentOverride - In the implementation block
@property (nonatomic,copy) NSString * sessionAuthHeaderOverride;                                //@synthesize sessionAuthHeaderOverride=_sessionAuthHeaderOverride - In the implementation block
@property (assign,nonatomic) BOOL homeKitAllowExplicitContentSetting;                           //@synthesize homeKitAllowExplicitContentSetting=_homeKitAllowExplicitContentSetting - In the implementation block
@property (assign,nonatomic) BOOL homeKitUpdateListeningHistorySetting;                         //@synthesize homeKitUpdateListeningHistorySetting=_homeKitUpdateListeningHistorySetting - In the implementation block
@property (nonatomic,copy) NSString * serviceID;                                                //@synthesize serviceID=_serviceID - In the implementation block
@property (nonatomic,copy) NSString * homeUserID;                                               //@synthesize homeUserID=_homeUserID - In the implementation block
@property (assign,nonatomic) BOOL serviceUpdateListeningHistory;                                //@synthesize serviceUpdateListeningHistory=_serviceUpdateListeningHistory - In the implementation block
@property (nonatomic,retain) NSDictionary * serviceUpdateListeningHistoryAllUsers;              //@synthesize serviceUpdateListeningHistoryAllUsers=_serviceUpdateListeningHistoryAllUsers - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)serviceID;
-(void)setServiceID:(NSString *)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)homeUserID;
-(NSURL *)serverOverrideURL;
-(NSString *)serverEnvironmentOverride;
-(NSString *)sessionAuthHeaderOverride;
-(BOOL)homeKitAllowExplicitContentSetting;
-(BOOL)homeKitUpdateListeningHistorySetting;
-(BOOL)serviceUpdateListeningHistory;
-(NSDictionary *)serviceUpdateListeningHistoryAllUsers;
-(void)setServerOverrideURL:(NSURL *)arg1 ;
-(void)setServerEnvironmentOverride:(NSString *)arg1 ;
-(void)setSessionAuthHeaderOverride:(NSString *)arg1 ;
-(void)setHomeKitAllowExplicitContentSetting:(BOOL)arg1 ;
-(void)setHomeKitUpdateListeningHistorySetting:(BOOL)arg1 ;
-(void)setHomeUserID:(NSString *)arg1 ;
-(void)setServiceUpdateListeningHistory:(BOOL)arg1 ;
-(void)setServiceUpdateListeningHistoryAllUsers:(NSDictionary *)arg1 ;
@end

