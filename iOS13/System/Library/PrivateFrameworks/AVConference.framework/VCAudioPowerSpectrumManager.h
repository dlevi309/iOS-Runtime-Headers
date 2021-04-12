/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <libobjc.A.dylib/VCAudioPowerSpectrumMeterDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSMutableDictionary, AVConferenceXPCClient, NSObject, NSString;

@interface VCAudioPowerSpectrumManager : NSObject <VCAudioPowerSpectrumMeterDelegate> {

	NSMutableArray* _meters;
	NSMutableDictionary* _sources;
	AVConferenceXPCClient* _connection;
	NSObject*<OS_dispatch_queue> _xpcCommandQueue;

}

@property (nonatomic,readonly) NSMutableArray * meters;                    //@synthesize meters=_meters - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * sources;              //@synthesize sources=_sources - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(NSMutableArray *)meters;
-(NSMutableDictionary *)sources;
-(void)audioPowerSpectrumMeter:(id)arg1 didUpdateAudioPowerSpectrums:(id)arg2 ;
-(void)registerBlocksForService;
-(void)deregisterBlocksForService;
-(void)registerAudioPowerMeterSource:(id)arg1 ;
-(void)unregisterAudioPowerSpectrumSourceForStreamToken:(id)arg1 ;
@end

