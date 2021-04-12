/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setDebugTimer:(VMUDebugTimer *)arg1 ;
-(VMUDebugTimer *)debugTimer;
-(id)stackIDsToNodesWithFilter:(/*^block*/id)arg1 ;
-(id)initWithGraph:(id)arg1 stackLogReader:(id)arg2 ;
-(id)callTreeWithOptions:(unsigned long long)arg1 nodeFilter:(/*^block*/id)arg2 ;
@end

