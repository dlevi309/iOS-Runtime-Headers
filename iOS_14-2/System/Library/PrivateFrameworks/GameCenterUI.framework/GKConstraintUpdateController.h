/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/


@class NSPointerArray;

@interface GKConstraintUpdateController : NSObject {

	NSPointerArray* _constraintsToUpdate;

}

@property (nonatomic,retain) NSPointerArray * constraintsToUpdate;              //@synthesize constraintsToUpdate=_constraintsToUpdate - In the implementation block
+(id)sharedController;
-(void)registerConstraint:(id)arg1 leading:(double)arg2 forFontTextStyle:(id)arg3 ;
-(void)_updateConstraints;
-(void)updateConstraint:(id)arg1 ;
-(NSPointerArray *)constraintsToUpdate;
-(void)setConstraintsToUpdate:(NSPointerArray *)arg1 ;
-(void)dealloc;
@end

