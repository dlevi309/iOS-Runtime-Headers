/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/VCObject.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSMutableDictionary, NSObject;

@interface VCQoSMonitorManager : VCObject {

	NSMutableArray* _monitors;
	NSMutableDictionary* _sources;
	NSObject*<OS_dispatch_queue> _xpcCommandQueue;
	long long _reportingInterval;
	NSMutableArray* _moitors;

}

@property (nonatomic,readonly) NSMutableArray * moitors;              //@synthesize moitors=_moitors - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)registerBlocksForService;
-(void)deregisterBlocksForService;
-(BOOL)doesQoSSourceExistForStreamToken:(id)arg1 ;
-(void)registerQoSReportingSourceForToken:(long long)arg1 ;
-(void)unregisterQoSReportingSourceForToken:(long long)arg1 ;
-(void)updateQoSReport:(id)arg1 toClientsWithToken:(long long)arg2 ;
-(NSMutableArray *)moitors;
@end

