/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(NSCache *)policyCache;
-(void)willEnterForeground;
-(id)initPrivate;
-(void)setPolicyCache:(NSCache *)arg1 ;
-(CTServerConnectionRef)ctServerConnection;
-(void)setCtServerConnection:(CTServerConnectionRef)arg1 ;
-(id)usagePolicyFor:(id)arg1 ;
-(BOOL)setCellularUsagePolicy:(id)arg1 forBundle:(id)arg2 ;
-(BOOL)setUsagePoliciesForBundle:(id)arg1 cellular:(BOOL)arg2 wifi:(BOOL)arg3 ;
-(void)handlePolicyChangedNotification;
-(id)fetchUsagePolicyFor:(id)arg1 ;
@end

