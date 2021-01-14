/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StudyLog.framework/StudyLog
*/

#import <libobjc.A.dylib/SLGDomainWhitelisting.h>

@protocol OS_dispatch_queue;
@class NSSet, NSObject, NSString;

@interface SLGDomainWhitelist : NSObject <SLGDomainWhitelisting> {

	NSObject*<OS_dispatch_queue> _lockQueue;
	NSSet* _whitelist;
	BOOL _allowUnspecifiedDomains;

}

@property (assign,nonatomic) BOOL allowUnspecifiedDomains; 
@property (nonatomic,readonly) NSSet * whitelist; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSSet *)whitelist;
-(void)addDomain:(id)arg1 ;
-(id)init;
-(BOOL)allowUnspecifiedDomains;
-(void)setAllowUnspecifiedDomains:(BOOL)arg1 ;
-(BOOL)isDomainWhitelisted:(id)arg1 ;
-(void)dealloc;
-(void)_reloadSettings;
-(void)_beginObservingSettings;
-(void)_stopObservingSettings;
-(void)_lockQueue_loadSettings;
-(void)_lockQueue_loadWhitelist;
-(void)_lockQueue_loadUnspecifiedDomains;
-(void)removeDomain:(id)arg1 ;
@end

