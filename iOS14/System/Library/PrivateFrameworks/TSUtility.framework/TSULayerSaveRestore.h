/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

