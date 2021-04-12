/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSMutableArray;

@interface UIWebSelectionGraph : NSObject {

	NSMutableArray* _selectionNodes;

}
-(id)init;
-(id)addNodeFromSelection:(id)arg1 ;
-(void)exploreFromNode:(id)arg1 outwards:(BOOL)arg2 maxDepth:(int)arg3 ;
-(void)exploreFromNode:(id)arg1 ;
-(void)clearNodes;
-(void)dealloc;
@end

