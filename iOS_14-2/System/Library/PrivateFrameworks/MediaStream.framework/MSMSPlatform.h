/*
* Generated on Thursday, January 14, 2021 at 2:26:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
*/

#import <MediaStream/MediaStream-Structs.h>
#import <libobjc.A.dylib/MSPlatform.h>

@class NSData, ACAccountStore, NSString;

@interface MSMSPlatform : NSObject <MSPlatform> {

	BOOL _isPerfLoggingEnabled;
	NSData* _pushToken;
	ACAccountStore* _accountStore;

}

@property (nonatomic,retain) ACAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
@property (assign,nonatomic) BOOL isPerfLoggingEnabled;                  //@synthesize isPerfLoggingEnabled=_isPerfLoggingEnabled - In the implementation block
@property (nonatomic,retain) NSData * pushToken;                         //@synthesize pushToken=_pushToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)thePlatform;
-(void)setPushToken:(NSData *)arg1 ;
-(id)fullNameFromFirstName:(id)arg1 lastName:(id)arg2 ;
-(void)logFile:(const char*)arg1 func:(const char*)arg2 line:(int)arg3 facility:(int)arg4 level:(int)arg5 format:(id)arg6 args:(char*)arg7 ;
-(NSData *)pushToken;
-(id)init;
-(id)authTokenForPersonID:(id)arg1 ;
-(void)_rereadDefaults;
-(id)stringForSysctlKey:(id)arg1 ;
-(id)socketOptions;
-(BOOL)shouldLogAtLevel:(int)arg1 ;
-(Class)pluginClass;
-(id)contentURLForPersonID:(id)arg1 ;
-(id)pathMediaStreamDir;
-(ACAccountStore *)accountStore;
-(BOOL)isPerfLoggingEnabled;
-(BOOL)shouldEnableNewFeatures;
-(id)_accountForPersonID:(id)arg1 ;
-(id)baseURLForPersonID:(id)arg1 ;
-(Class)deletePluginClass;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(id)hardwareString;
-(void)setIsPerfLoggingEnabled:(BOOL)arg1 ;
-(id)OSVersion;
-(CFStringRef)_facilityStringForFacility:(int)arg1 ;
-(id)pushTokenForPersonID:(id)arg1 ;
-(void)didDetectUnrecoverableCondition;
-(BOOL)personIDUsesProductionPushEnvironment:(id)arg1 ;
-(Class)subscriberPluginClass;
-(id)OSString;
-(BOOL)policyMayDownload;
-(BOOL)policyMayUpload;
-(BOOL)_mayPerformFileTransfer;
-(BOOL)isPerformanceLoggingEnabled;
-(Class)publisherPluginClass;
-(id)UDID;
-(id)appBundleInfoString;
-(void)logFacility:(int)arg1 level:(int)arg2 format:(id)arg3 args:(char*)arg4 ;
-(id)theDaemon;
@end

