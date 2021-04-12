/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSData *)pushToken;
-(id)OSVersion;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(ACAccountStore *)accountStore;
-(void)setPushToken:(NSData *)arg1 ;
-(id)UDID;
-(id)socketOptions;
-(Class)deletePluginClass;
-(void)didDetectUnrecoverableCondition;
-(id)pushTokenForPersonID:(id)arg1 ;
-(BOOL)shouldEnableNewFeatures;
-(id)contentURLForPersonID:(id)arg1 ;
-(BOOL)isPerformanceLoggingEnabled;
-(BOOL)shouldLogAtLevel:(int)arg1 ;
-(void)logFacility:(int)arg1 level:(int)arg2 format:(id)arg3 args:(char*)arg4 ;
-(void)logFile:(const char*)arg1 func:(const char*)arg2 line:(int)arg3 facility:(int)arg4 level:(int)arg5 format:(id)arg6 args:(char*)arg7 ;
-(id)fullNameFromFirstName:(id)arg1 lastName:(id)arg2 ;
-(id)pathMediaStreamDir;
-(Class)publisherPluginClass;
-(Class)subscriberPluginClass;
-(id)hardwareString;
-(id)OSString;
-(id)appBundleInfoString;
-(BOOL)policyMayUpload;
-(BOOL)policyMayDownload;
-(id)baseURLForPersonID:(id)arg1 ;
-(id)authTokenForPersonID:(id)arg1 ;
-(id)theDaemon;
-(CFStringRef)_facilityStringForFacility:(int)arg1 ;
-(void)_rereadDefaults;
-(Class)pluginClass;
-(id)stringForSysctlKey:(id)arg1 ;
-(BOOL)_mayPerformFileTransfer;
-(id)_accountForPersonID:(id)arg1 ;
-(BOOL)personIDUsesProductionPushEnvironment:(id)arg1 ;
-(BOOL)isPerfLoggingEnabled;
-(void)setIsPerfLoggingEnabled:(BOOL)arg1 ;
@end

