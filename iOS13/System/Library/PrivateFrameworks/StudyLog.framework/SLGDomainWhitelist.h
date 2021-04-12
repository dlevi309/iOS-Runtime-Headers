/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL allowUnspecifiedDomains; 
@property (nonatomic,readonly) NSSet * whitelist; 
-(id)init;
-(void)dealloc;
-(NSSet *)whitelist;
-(void)addDomain:(id)arg1 ;
-(void)_reloadSettings;
-(void)_beginObservingSettings;
-(void)_stopObservingSettings;
-(void)_lockQueue_loadSettings;
-(void)_lockQueue_loadWhitelist;
-(void)_lockQueue_loadUnspecifiedDomains;
-(BOOL)isDomainWhitelisted:(id)arg1 ;
-(void)removeDomain:(id)arg1 ;
-(BOOL)allowUnspecifiedDomains;
-(void)setAllowUnspecifiedDomains:(BOOL)arg1 ;
@end

