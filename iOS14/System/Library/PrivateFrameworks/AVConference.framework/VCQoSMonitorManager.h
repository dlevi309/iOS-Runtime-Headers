/*
* Generated on Thursday, January 14, 2021 at 2:25:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)updateQoSReport:(id)arg1 toClientsWithToken:(long long)arg2 ;
-(BOOL)doesQoSSourceExistForStreamToken:(id)arg1 ;
-(void)registerBlocksForService;
-(NSMutableArray *)moitors;
-(void)deregisterBlocksForService;
-(void)registerQoSReportingSourceForToken:(long long)arg1 ;
-(void)unregisterQoSReportingSourceForToken:(long long)arg1 ;
-(void)dealloc;
@end

