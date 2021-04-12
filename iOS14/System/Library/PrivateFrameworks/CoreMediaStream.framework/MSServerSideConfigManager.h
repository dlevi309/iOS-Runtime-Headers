/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
*/

#import <libobjc.A.dylib/MSServerSideConfigProtocolDelegate.h>

@class NSString, NSDictionary, MSMediaStreamDaemon, MSServerSideConfigProtocol;

@interface MSServerSideConfigManager : NSObject <MSServerSideConfigProtocolDelegate> {

	NSString* _personID;
	NSDictionary* _config;
	MSMediaStreamDaemon* _daemon;
	NSString* _configPath;
	MSServerSideConfigProtocol* _protocol;
	int _state;

}

@property (nonatomic,readonly) NSString * personID;                     //@synthesize personID=_personID - In the implementation block
@property (nonatomic,retain) NSDictionary * config; 
@property (assign,nonatomic) MSMediaStreamDaemon * daemon;              //@synthesize daemon=_daemon - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)forgetPersonID:(id)arg1 ;
+(id)configManagerForPersonID:(id)arg1 ;
+(id)existingConfigManagerForPersonID:(id)arg1 ;
+(void)abortAllActivities;
+(int)intValueForParameter:(id)arg1 forPersonID:(id)arg2 defaultValue:(int)arg3 ;
+(double)doubleValueForParameter:(id)arg1 forPersonID:(id)arg2 defaultValue:(double)arg3 ;
+(long long)longValueForParameter:(id)arg1 forPersonID:(id)arg2 defaultValue:(long long)arg3 ;
+(long long)longLongValueForParameter:(id)arg1 forPersonID:(id)arg2 defaultValue:(long long)arg3 ;
+(id)objectForKey:(id)arg1 forPersonID:(id)arg2 defaultValue:(id)arg3 ;
-(void)abort;
-(NSDictionary *)config;
-(void)setDaemon:(MSMediaStreamDaemon *)arg1 ;
-(MSMediaStreamDaemon *)daemon;
-(NSString *)personID;
-(void)setConfig:(NSDictionary *)arg1 ;
-(void)dealloc;
-(id)initWithPersonID:(id)arg1 baseURL:(id)arg2 ;
-(void)serverSideConfigProtocol:(id)arg1 didFinishWithConfiguration:(id)arg2 error:(id)arg3 ;
-(void)serverSideConfigProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2 ;
-(void)refreshConfiguration;
@end

