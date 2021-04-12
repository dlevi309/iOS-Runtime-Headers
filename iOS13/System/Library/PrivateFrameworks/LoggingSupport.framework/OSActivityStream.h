/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
*/


@protocol OSDeviceDelegate, OSActivityStreamDelegate;
#import <LoggingSupport/LoggingSupport-Structs.h>
@class NSMutableSet, _OSLogStreamFilter, NSCompoundPredicate, OSLogDevice;

@interface OSActivityStream : NSObject {

	os_activity_stream_sRef _stream;
	NSMutableSet* _pids;
	void* _deviceSearchSession;
	void* _deviceEventSession;
	BOOL _delegateStreamErrorLess;
	BOOL _delegateStreamWithError;
	BOOL _delegateHasDidFail;
	_OSLogStreamFilter* _streamFilter;
	id<OSDeviceDelegate> _deviceDelegate;
	id<OSActivityStreamDelegate> _delegate;
	unsigned long long _options;
	unsigned long long _eventFilter;
	NSCompoundPredicate* _predicate;
	OSLogDevice* _device;

}

@property (assign,nonatomic) unsigned long long options;                                //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) unsigned long long eventFilter;                            //@synthesize eventFilter=_eventFilter - In the implementation block
@property (assign,nonatomic) unsigned long long events; 
@property (assign,nonatomic,__weak) id<OSActivityStreamDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSCompoundPredicate * predicate;                             //@synthesize predicate=_predicate - In the implementation block
@property (assign,nonatomic,__weak) id<OSDeviceDelegate> deviceDelegate;                //@synthesize deviceDelegate=_deviceDelegate - In the implementation block
@property (nonatomic,retain) OSLogDevice * device;                                      //@synthesize device=_device - In the implementation block
-(id)init;
-(void)dealloc;
-(unsigned long long)options;
-(id<OSActivityStreamDelegate>)delegate;
-(void)setDelegate:(id<OSActivityStreamDelegate>)arg1 ;
-(void)setPredicate:(NSCompoundPredicate *)arg1 ;
-(NSCompoundPredicate *)predicate;
-(void)stop;
-(void)start;
-(void)setOptions:(unsigned long long)arg1 ;
-(OSLogDevice *)device;
-(id)initWithDevice:(void*)arg1 ;
-(unsigned long long)events;
-(void)setEvents:(unsigned long long)arg1 ;
-(void)setDevice:(OSLogDevice *)arg1 ;
-(void)addProcessID:(int)arg1 ;
-(BOOL)streamEvent:(id)arg1 error:(id)arg2 ;
-(void)startRemote;
-(void)startLocal;
-(void)stopLocal;
-(void)stopRemote;
-(void)setDeviceDelegate:(id<OSDeviceDelegate>)arg1 ;
-(id)getInfoForDevice:(id)arg1 andKey:(id)arg2 ;
-(BOOL)establishTrust:(id)arg1 ;
-(id<OSDeviceDelegate>)deviceDelegate;
-(unsigned long long)eventFilter;
-(void)setEventFilter:(unsigned long long)arg1 ;
@end

