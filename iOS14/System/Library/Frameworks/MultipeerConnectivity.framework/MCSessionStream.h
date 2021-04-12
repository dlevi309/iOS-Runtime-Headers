/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
*/


@protocol OS_dispatch_source;
@class NSObject, MCPeerID, NSString, NSMutableData, NSURL, NSProgress, MCResourceDownloader, MCResourceProgressObserver;

@interface MCSessionStream : NSObject {

	NSObject*<OS_dispatch_source> _source;
	BOOL _sourceSuspended;
	BOOL _progressUnbounded;
	unsigned _streamID;
	int state;
	int _fd;
	MCPeerID* _peerID;
	NSString* _name;
	NSMutableData* _incomingBuffer;
	NSURL* _url;
	NSProgress* _progress;
	/*^block*/id _completionHandler;
	MCResourceDownloader* _urlDownloader;
	MCResourceProgressObserver* _observer;

}

@property (assign,nonatomic) MCPeerID * peerID;                                  //@synthesize peerID=_peerID - In the implementation block
@property (nonatomic,copy) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned streamID;                                  //@synthesize streamID=_streamID - In the implementation block
@property (assign,nonatomic) int state; 
@property (assign,nonatomic) int fd;                                             //@synthesize fd=_fd - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_source> source;               //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) BOOL sourceSuspended;                               //@synthesize sourceSuspended=_sourceSuspended - In the implementation block
@property (nonatomic,retain) NSMutableData * incomingBuffer;                     //@synthesize incomingBuffer=_incomingBuffer - In the implementation block
@property (nonatomic,copy) NSURL * url;                                          //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                              //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) MCResourceProgressObserver * observer;              //@synthesize observer=_observer - In the implementation block
@property (assign,nonatomic) BOOL progressUnbounded;                             //@synthesize progressUnbounded=_progressUnbounded - In the implementation block
@property (nonatomic,copy) id completionHandler;                                 //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) MCResourceDownloader * urlDownloader;               //@synthesize urlDownloader=_urlDownloader - In the implementation block
-(void)setPeerID:(MCPeerID *)arg1 ;
-(NSProgress *)progress;
-(void)setObserver:(MCResourceProgressObserver *)arg1 ;
-(MCResourceProgressObserver *)observer;
-(void)setCompletionHandler:(id)arg1 ;
-(int)fd;
-(MCPeerID *)peerID;
-(id)completionHandler;
-(NSURL *)url;
-(void)setFd:(int)arg1 ;
-(void)setSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSString *)name;
-(unsigned)streamID;
-(void)setProgress:(NSProgress *)arg1 ;
-(void)setStreamID:(unsigned)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setState:(int)arg1 ;
-(int)state;
-(void)setName:(NSString *)arg1 ;
-(void)dealloc;
-(NSObject*<OS_dispatch_source>)source;
-(BOOL)sourceSuspended;
-(void)setSourceSuspended:(BOOL)arg1 ;
-(NSMutableData *)incomingBuffer;
-(void)setIncomingBuffer:(NSMutableData *)arg1 ;
-(BOOL)progressUnbounded;
-(void)setProgressUnbounded:(BOOL)arg1 ;
-(MCResourceDownloader *)urlDownloader;
-(void)setUrlDownloader:(MCResourceDownloader *)arg1 ;
@end

