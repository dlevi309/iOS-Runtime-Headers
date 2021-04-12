/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)readHandler;
-(void)setReadHandler:(id)arg1 ;
-(BOOL)setupDatagramChannel:(id)arg1 eventHandler:(/*^block*/id)arg2 error:(id*)arg3 ;
-(void)removeDatagramChannel:(id)arg1 ;
-(id)addDatagramChannelWithDescriptor:(int)arg1 eventHandler:(/*^block*/id)arg2 error:(id*)arg3 ;
-(id)addDatagramChannelWithDestination:(id)arg1 eventHandler:(/*^block*/id)arg2 error:(id*)arg3 ;
-(id)datagramChannelWithChannelToken:(unsigned)arg1 ;
-(void)executeBlockForIDSDestination:(id)arg1 blockToExecute:(/*^block*/id)arg2 ;
@end

