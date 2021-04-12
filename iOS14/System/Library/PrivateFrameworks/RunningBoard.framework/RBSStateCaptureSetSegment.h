/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/


@protocol RBSInvalidatable;
@class NSMutableSet, NSSet;

@interface RBSStateCaptureSetSegment : NSObject {

	id<RBSInvalidatable> _invalidatable;
	NSMutableSet* _items;

}

@property (nonatomic,readonly) NSSet * items; 
-(void)removeItem:(id)arg1 ;
-(id)init;
-(unsigned long long)count;
-(NSSet *)items;
-(void)addItem:(id)arg1 withLength:(unsigned long long)arg2 ;
-(id)_stateCapture;
-(BOOL)containsItem:(id)arg1 ;
-(void)dealloc;
@end

