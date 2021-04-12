/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
*/


@protocol VMUCommonGraphInterface, VMUStackLogReader;
@class VMUDebugTimer;

@interface VMUStackLogConsolidator : NSObject {

	id<VMUCommonGraphInterface> _graph;
	id<VMUStackLogReader> _stackLogReader;
	VMUDebugTimer* _debugTimer;

}

@property (nonatomic,retain) VMUDebugTimer * debugTimer;              //@synthesize debugTimer=_debugTimer - In the implementation block
-(id)stackIDsToNodesWithFilter:(/*^block*/id)arg1 ;
-(id)initWithGraph:(id)arg1 stackLogReader:(id)arg2 ;
-(id)callTreeWithOptions:(unsigned long long)arg1 nodeFilter:(/*^block*/id)arg2 ;
-(void)setDebugTimer:(VMUDebugTimer *)arg1 ;
-(VMUDebugTimer *)debugTimer;
@end

