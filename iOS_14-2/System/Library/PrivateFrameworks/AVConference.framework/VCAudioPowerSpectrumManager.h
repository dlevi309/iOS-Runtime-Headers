/*
* Generated on Thursday, January 14, 2021 at 2:25:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)unregisterAudioPowerSpectrumSourceForStreamToken:(id)arg1 ;
-(id)init;
-(void)registerBlocksForService;
-(NSMutableDictionary *)sources;
-(void)audioPowerSpectrumMeter:(id)arg1 didUpdateAudioPowerSpectrums:(id)arg2 ;
-(void)registerAudioPowerMeterSource:(id)arg1 ;
-(void)deregisterBlocksForService;
-(NSMutableArray *)meters;
-(void)dealloc;
@end

