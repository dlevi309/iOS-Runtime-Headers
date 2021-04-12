/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSMetricsMutableEvent.h>

@class NSString;

@interface SSMetricsAppInstallEvent : SSMetricsMutableEvent

@property (nonatomic,retain) NSString * buildVersion; 
@property (nonatomic,retain) NSString * bundleID; 
@property (nonatomic,retain) NSString * hardwareType; 
@property (nonatomic,retain) NSString * installError; 
@property (assign,nonatomic) unsigned long long installStatus; 
@property (assign,nonatomic) unsigned long long installType; 
@property (assign,nonatomic) long long jobID; 
+(unsigned long long)_installStatusForString:(id)arg1 ;
+(unsigned long long)_installTypeForString:(id)arg1 ;
+(id)_stringForInstallStatus:(unsigned long long)arg1 ;
+(id)_stringForInstallType:(unsigned long long)arg1 ;
-(id)init;
-(id)description;
-(unsigned long long)installType;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)buildVersion;
-(void)setBuildVersion:(NSString *)arg1 ;
-(NSString *)hardwareType;
-(void)setHardwareType:(NSString *)arg1 ;
-(void)setInstallType:(unsigned long long)arg1 ;
-(BOOL)requiresDiagnosticSendingPermission;
-(NSString *)installError;
-(unsigned long long)installStatus;
-(long long)jobID;
-(void)setInstallError:(NSString *)arg1 ;
-(void)setInstallStatus:(unsigned long long)arg1 ;
-(void)setJobID:(long long)arg1 ;
@end

