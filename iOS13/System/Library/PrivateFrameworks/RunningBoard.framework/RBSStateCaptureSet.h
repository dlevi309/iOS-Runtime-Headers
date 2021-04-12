/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/


@protocol BSInvalidatable;
@class NSMutableSet, NSSet;

@interface RBSStateCaptureSet : NSObject {

	id<BSInvalidatable> _invalidatable;
	NSMutableSet* _stateCaptureSegments;

}

@property (nonatomic,copy,readonly) NSSet * itemsCopy; 
-(id)init;
-(void)removeItem:(id)arg1 ;
-(void)addItem:(id)arg1 ;
-(NSSet *)itemsCopy;
@end

