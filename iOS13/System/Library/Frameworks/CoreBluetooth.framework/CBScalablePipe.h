/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
*/


@class CBScalablePipeManager, CBCentral, CBPeer, NSString, NSInputStream, NSOutputStream;

@interface CBScalablePipe : NSObject {

	CBScalablePipeManager* _pipeManager;
	int _socket;
	BOOL _reliablePipe;
	CBCentral* _central;
	CBPeer* _peer;
	NSString* _name;
	long long _type;
	long long _priority;
	NSInputStream* _input;
	NSOutputStream* _output;
	void* _channel;

}

@property (nonatomic,readonly) CBCentral * central;                  //@synthesize central=_central - In the implementation block
@property (nonatomic,readonly) CBPeer * peer;                        //@synthesize peer=_peer - In the implementation block
@property (nonatomic,readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) long long type;                       //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long priority;                   //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) BOOL reliablePipe;                    //@synthesize reliablePipe=_reliablePipe - In the implementation block
@property (nonatomic,readonly) NSInputStream * input;                //@synthesize input=_input - In the implementation block
@property (nonatomic,readonly) NSOutputStream * output;              //@synthesize output=_output - In the implementation block
@property (nonatomic,readonly) void* channel;                        //@synthesize channel=_channel - In the implementation block
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(long long)type;
-(long long)priority;
-(NSInputStream *)input;
-(CBPeer *)peer;
-(void*)channel;
-(NSOutputStream *)output;
-(void)setOrphan;
-(id)initWithPipeManager:(id)arg1 info:(id)arg2 ;
-(CBCentral *)central;
-(BOOL)reliablePipe;
@end

