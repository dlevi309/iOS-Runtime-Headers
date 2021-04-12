/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBViewMorphAnimatorDataSource.h>

@class NSString;

@interface SBPIPMorphAnimatorDataSource : NSObject <SBViewMorphAnimatorDataSource> {

	int _targetProcessIdentifier;
	NSString* _scenePersistenceIdentifier;

}

@property (nonatomic,readonly) int targetProcessIdentifier;                        //@synthesize targetProcessIdentifier=_targetProcessIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * scenePersistenceIdentifier;              //@synthesize scenePersistenceIdentifier=_scenePersistenceIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(CGRect)sourceContentFrameForAnimator:(id)arg1 ;
-(CGRect)targetFinalFrameForAnimator:(id)arg1 ;
-(double)targetFinalCornerRadiusForAnimator:(id)arg1 ;
-(id)initWithTargetProcessIdentifier:(int)arg1 scenePersistenceIdentifier:(id)arg2 ;
-(int)targetProcessIdentifier;
-(NSString *)scenePersistenceIdentifier;
@end

