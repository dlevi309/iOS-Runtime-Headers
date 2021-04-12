/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


#import <HealthDaemon/HealthDaemon-Structs.h>
@class HDProfile, NSString;

@interface HDAnalyticsWriter : NSObject {

	HDProfile* _profile;
	SecCertificateRef _certificate;
	NSString* _analyticsDirectory;

}
+(id)_payloadIdentifierForBugType:(id)arg1 ;
-(id)init;
-(id)initWithProfile:(id)arg1 ;
-(BOOL)_submitJSONAnalyticsData:(id)arg1 bugType:(id)arg2 customDirectory:(id)arg3 configuration:(id)arg4 error:(id*)arg5 ;
-(BOOL)_cleanAnalyticsDirectory:(id)arg1 error:(id*)arg2 ;
-(BOOL)_createAndCleanAnalyticsDirectoryWithError:(id*)arg1 ;
-(id)_serializeAnalyticsData:(id)arg1 errorOut:(id*)arg2 ;
-(BOOL)_loadCertificateWithError:(id*)arg1 ;
-(id)_encryptAnalyticsData:(id)arg1 withConfig:(id)arg2 error:(id*)arg3 ;
-(BOOL)_createAnalyticsDirectory:(id)arg1 error:(id*)arg2 ;
-(BOOL)submitJSONAnalyticsData:(id)arg1 bugType:(id)arg2 error:(id*)arg3 ;
-(BOOL)submitJSONAnalyticsData:(id)arg1 toDirectory:(id)arg2 withConfiguration:(id)arg3 error:(id*)arg4 ;
-(id)URLForAnalyticsFileWithName:(id)arg1 ;
-(id)analyticsFilePathsWithError:(id*)arg1 ;
@end

