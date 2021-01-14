/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/


@protocol RBSInvalidatable;
@class NSMutableSet, NSSet;

@interface RBSStateCaptureSet : NSObject {

	id<RBSInvalidatable> _invalidatable;
	NSMutableSet* _stateCaptureSegments;

}

@property (nonatomic,copy,readonly) NSSet * itemsCopy; 
-(void)removeItem:(id)arg1 ;
-(void)addItem:(id)arg1 ;
-(id)init;
-(NSSet *)itemsCopy;
@end

