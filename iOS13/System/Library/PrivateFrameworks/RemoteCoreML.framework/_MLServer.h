/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteCoreML.framework/RemoteCoreML
*/


@protocol OS_dispatch_queue;
@class _MLNetworking, _MLNetworkOptions, _MLNetworkPacket, NSObject;

@interface _MLServer : NSObject {

	_MLNetworking* _nwObj;
	_MLNetworkOptions* _nwOptions;
	_MLNetworkPacket* _packet;
	/*^block*/id _loadFunction;
	/*^block*/id _predictFunction;
	/*^block*/id _unLoadFunction;
	/*^block*/id _textFunction;
	NSObject*<OS_dispatch_queue> _q;

}

@property (nonatomic,readonly) _MLNetworking * nwObj;                         //@synthesize nwObj=_nwObj - In the implementation block
@property (nonatomic,readonly) _MLNetworkOptions * nwOptions;                 //@synthesize nwOptions=_nwOptions - In the implementation block
@property (nonatomic,readonly) _MLNetworkPacket * packet;                     //@synthesize packet=_packet - In the implementation block
@property (nonatomic,copy) id loadFunction;                                   //@synthesize loadFunction=_loadFunction - In the implementation block
@property (nonatomic,copy) id predictFunction;                                //@synthesize predictFunction=_predictFunction - In the implementation block
@property (nonatomic,copy) id unLoadFunction;                                 //@synthesize unLoadFunction=_unLoadFunction - In the implementation block
@property (nonatomic,copy) id textFunction;                                   //@synthesize textFunction=_textFunction - In the implementation block
@property (q,nonatomic,readonly) NSObject*<OS_dispatch_queue> q;              //@synthesize q=_q - In the implementation block
-(id)initWithOptions:(id)arg1 ;
-(void)stop;
-(void)start;
-(NSObject*<OS_dispatch_queue>)q;
-(_MLNetworkPacket *)packet;
-(_MLNetworkOptions *)nwOptions;
-(void)doReceive:(id)arg1 context:(id)arg2 isComplete:(BOOL)arg3 error:(id)arg4 ;
-(_MLNetworking *)nwObj;
-(id)loadFunction;
-(id)unLoadFunction;
-(id)predictFunction;
-(id)textFunction;
-(void)setLoadFunction:(id)arg1 ;
-(void)setPredictFunction:(id)arg1 ;
-(void)setUnLoadFunction:(id)arg1 ;
-(void)setTextFunction:(id)arg1 ;
-(void)setLoadCommand:(/*^block*/id)arg1 ;
-(void)setPredictCommand:(/*^block*/id)arg1 ;
-(void)setUnLoadCommand:(/*^block*/id)arg1 ;
-(void)setTextCommand:(/*^block*/id)arg1 ;
@end

