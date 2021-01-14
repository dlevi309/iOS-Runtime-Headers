/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <libobjc.A.dylib/NEPrettyDescription.h>

@class NEVPNConnection, NEConfiguration, NSArray, NSString, NEVPNProtocol;

@interface NEVPNManager : NSObject <NEPrettyDescription> {

	BOOL _hasLoaded;
	BOOL _notificationSent;
	NEVPNConnection* _connection;
	NEConfiguration* _configuration;

}

@property (copy) NEConfiguration * configuration;                       //@synthesize configuration=_configuration - In the implementation block
@property (assign) BOOL hasLoaded;                                      //@synthesize hasLoaded=_hasLoaded - In the implementation block
@property (assign) BOOL notificationSent;                               //@synthesize notificationSent=_notificationSent - In the implementation block
@property (copy) NSArray * onDemandRules; 
@property (getter=isOnDemandEnabled) BOOL onDemandEnabled; 
@property (copy) NSString * localizedDescription; 
@property (retain) NEVPNProtocol * protocol; 
@property (retain) NEVPNProtocol * protocolConfiguration; 
@property (readonly) NEVPNConnection * connection;                      //@synthesize connection=_connection - In the implementation block
@property (getter=isEnabled) BOOL enabled; 
+(id)sharedManager;
+(id)loadedManagers;
+(id)mapError:(id)arg1 ;
-(void)setProtocol:(NEVPNProtocol *)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)init;
-(NEVPNProtocol *)protocol;
-(NSArray *)onDemandRules;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setHasLoaded:(BOOL)arg1 ;
-(id)initWithGrade:(long long)arg1 connection:(id)arg2 tunnelType:(long long)arg3 ;
-(BOOL)isProtocolTypeValid:(long long)arg1 ;
-(void)additionalSetup;
-(void)loadFromPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setNotificationSent:(BOOL)arg1 ;
-(void)setOnDemandRules:(NSArray *)arg1 ;
-(void)setOnDemandEnabled:(BOOL)arg1 ;
-(id)description;
-(NSString *)localizedDescription;
-(NEConfiguration *)configuration;
-(BOOL)isOnDemandEnabled;
-(NEVPNConnection *)connection;
-(void)removeFromPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)saveToPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)notificationSent;
-(void)setProtocolConfiguration:(NEVPNProtocol *)arg1 ;
-(NEVPNProtocol *)protocolConfiguration;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(BOOL)isEnabled;
-(void)setConfiguration:(NEConfiguration *)arg1 ;
-(BOOL)hasLoaded;
@end

