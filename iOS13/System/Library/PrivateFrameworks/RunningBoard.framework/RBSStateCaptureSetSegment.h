/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/


@protocol BSInvalidatable;
@class NSMutableSet, NSSet;

@interface RBSStateCaptureSetSegment : NSObject {

	id<BSInvalidatable> _invalidatable;
	NSMutableSet* _items;

}

@property (nonatomic,readonly) NSSet * items; 
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(void)removeItem:(id)arg1 ;
-(NSSet *)items;
-(BOOL)containsItem:(id)arg1 ;
-(id)_stateCapture;
-(void)addItem:(id)arg1 withLength:(unsigned long long)arg2 ;
@end

