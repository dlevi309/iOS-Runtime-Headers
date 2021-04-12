/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBViewMorphAnimatorDataSource.h>

@class NSString;

@interface SBPIPMorphAnimatorDataSource : NSObject <SBViewMorphAnimatorDataSource> {

	BOOL _gestureInitiated;
	int _targetProcessIdentifier;
	NSString* _scenePersistenceIdentifier;

}

@property (nonatomic,readonly) int targetProcessIdentifier;                                  //@synthesize targetProcessIdentifier=_targetProcessIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * scenePersistenceIdentifier;                        //@synthesize scenePersistenceIdentifier=_scenePersistenceIdentifier - In the implementation block
@property (getter=isGestureInitiated,nonatomic,readonly) BOOL gestureInitiated;              //@synthesize gestureInitiated=_gestureInitiated - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)isGestureInitiated;
-(CGRect)sourceContentFrameForAnimator:(id)arg1 ;
-(CGRect)targetFinalFrameForAnimator:(id)arg1 ;
-(double)sourceCornerRadiusForAnimator:(id)arg1 ;
-(double)targetFinalCornerRadiusForAnimator:(id)arg1 ;
-(CGRect)sourceAppLayoutFrameForAnimator:(id)arg1 ;
-(id)initWithTargetProcessIdentifier:(int)arg1 scenePersistenceIdentifier:(id)arg2 gestureInitiated:(BOOL)arg3 ;
-(int)targetProcessIdentifier;
-(NSString *)scenePersistenceIdentifier;
@end

