/*
* Generated on Thursday, January 14, 2021 at 2:25:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@class NSMutableDictionary;

@interface VCDatagramChannelManager : NSObject {

	opaque_pthread_mutex_t _stateLock;
	unsigned _nextToken;
	/*^block*/id _readHandler;
	NSMutableDictionary* _datagramChannels;
	NSMutableDictionary* _destinations;

}

@property (copy) id readHandler;              //@synthesize readHandler=_readHandler - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)setReadHandler:(id)arg1 ;
-(id)readHandler;
-(void)dealloc;
-(BOOL)setupDatagramChannel:(id)arg1 eventHandler:(/*^block*/id)arg2 error:(id*)arg3 ;
-(void)removeDatagramChannel:(id)arg1 ;
-(id)setupEmulatedDatagramChannelWithDestination:(id)arg1 datagramChannel:(id)arg2 ;
-(id)addDatagramChannelWithDescriptor:(int)arg1 eventHandler:(/*^block*/id)arg2 error:(id*)arg3 ;
-(id)addDatagramChannelWithDestination:(id)arg1 eventHandler:(/*^block*/id)arg2 error:(id*)arg3 ;
-(id)datagramChannelWithChannelToken:(unsigned)arg1 ;
-(void)executeBlockForIDSDestination:(id)arg1 blockToExecute:(/*^block*/id)arg2 ;
@end

