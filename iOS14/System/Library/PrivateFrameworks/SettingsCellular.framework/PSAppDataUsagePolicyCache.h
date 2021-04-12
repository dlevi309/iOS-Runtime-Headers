/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellular.framework/SettingsCellular
*/


#import <SettingsCellular/SettingsCellular-Structs.h>
@class NSCache;

@interface PSAppDataUsagePolicyCache : NSObject {

	NSCache* _policyCache;
	CTServerConnectionRef _ctServerConnection;

}

@property (nonatomic,retain) NSCache * policyCache;                                 //@synthesize policyCache=_policyCache - In the implementation block
@property (nonatomic,retain) CTServerConnectionRef ctServerConnection;              //@synthesize ctServerConnection=_ctServerConnection - In the implementation block
+(id)sharedInstance;
-(id)initPrivate;
-(id)init;
-(void)willEnterForeground;
-(CTServerConnectionRef)ctServerConnection;
-(void)clearCache;
-(void)setCtServerConnection:(CTServerConnectionRef)arg1 ;
-(void)dealloc;
-(void)setPolicyCache:(NSCache *)arg1 ;
-(NSCache *)policyCache;
-(void)managedConfigurationSettingsDidChange;
-(void)managedConfigurationProfileListDidChange;
-(id)usagePolicyFor:(id)arg1 ;
-(BOOL)setCellularUsagePolicy:(id)arg1 forBundle:(id)arg2 ;
-(BOOL)setUsagePoliciesForBundle:(id)arg1 cellular:(BOOL)arg2 wifi:(BOOL)arg3 ;
-(void)handlePolicyChangedNotification;
-(id)fetchUsagePolicyFor:(id)arg1 ;
@end

