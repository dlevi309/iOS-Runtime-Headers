/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
*/

#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@protocol OS_os_activity, OS_dispatch_queue;
@class NSDictionary, NSObject, NSSet, PKDiscoveryLSWatcher, NSString;

@interface PKDiscoveryDriver : NSObject <LSApplicationWorkspaceObserverProtocol> {

	int _annotationNotifyToken;
	NSDictionary* _attributes;
	unsigned long long _flags;
	/*^block*/id _report;
	NSObject*<OS_os_activity> _relatedActivity;
	NSSet* _lastResults;
	id _mcNotificationToken;
	PKDiscoveryLSWatcher* _lsWatcher;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _sync;

}

@property (retain) NSDictionary * attributes;                              //@synthesize attributes=_attributes - In the implementation block
@property (assign) unsigned long long flags;                               //@synthesize flags=_flags - In the implementation block
@property (copy) id report;                                                //@synthesize report=_report - In the implementation block
@property (retain) NSObject*<OS_os_activity> relatedActivity;              //@synthesize relatedActivity=_relatedActivity - In the implementation block
@property (retain) NSSet * lastResults;                                    //@synthesize lastResults=_lastResults - In the implementation block
@property (assign) int annotationNotifyToken;                              //@synthesize annotationNotifyToken=_annotationNotifyToken - In the implementation block
@property (retain) id mcNotificationToken;                                 //@synthesize mcNotificationToken=_mcNotificationToken - In the implementation block
@property (retain) PKDiscoveryLSWatcher * lsWatcher;                       //@synthesize lsWatcher=_lsWatcher - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> sync;                      //@synthesize sync=_sync - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)sync;
-(void)removeWatchers;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(void)setAnnotationNotifyToken:(int)arg1 ;
-(int)annotationNotifyToken;
-(unsigned long long)flags;
-(void)setRelatedActivity:(NSObject*<OS_os_activity>)arg1 ;
-(id)report;
-(id)mcNotificationToken;
-(NSSet *)lastResults;
-(NSDictionary *)attributes;
-(void)performWithPreviousResults:(id)arg1 forceNotify:(BOOL)arg2 ;
-(void)setLsWatcher:(PKDiscoveryLSWatcher *)arg1 ;
-(void)setMcNotificationToken:(id)arg1 ;
-(void)setFlags:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)_performWithPreviousResults:(id)arg1 forceNotify:(BOOL)arg2 uninstalledProxies:(id)arg3 ;
-(void)installWatchers;
-(NSObject*<OS_os_activity>)relatedActivity;
-(void)setReport:(id)arg1 ;
-(void)cancel;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setLastResults:(NSSet *)arg1 ;
-(void)setSync:(NSObject*<OS_dispatch_queue>)arg1 ;
-(PKDiscoveryLSWatcher *)lsWatcher;
-(void)dealloc;
-(id)initWithAttributes:(id)arg1 flags:(unsigned long long)arg2 report:(/*^block*/id)arg3 ;
@end

