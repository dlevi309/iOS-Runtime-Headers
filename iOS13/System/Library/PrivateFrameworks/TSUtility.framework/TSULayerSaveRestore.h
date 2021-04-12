/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/


@class TSURetainedPointerKeyDictionary;

@interface TSULayerSaveRestore : NSObject {

	TSURetainedPointerKeyDictionary* _layerStates;

}

@property (nonatomic,retain) TSURetainedPointerKeyDictionary * layerStates;              //@synthesize layerStates=_layerStates - In the implementation block
-(void)dealloc;
-(TSURetainedPointerKeyDictionary *)layerStates;
-(void)setLayerStates:(TSURetainedPointerKeyDictionary *)arg1 ;
-(id)objectForLayer:(id)arg1 key:(id)arg2 ;
-(void)saveLayer:(id)arg1 ;
-(BOOL)restoreLayer:(id)arg1 ;
@end

