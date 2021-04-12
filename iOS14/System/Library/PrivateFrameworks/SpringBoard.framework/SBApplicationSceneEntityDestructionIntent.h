/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@interface SBApplicationSceneEntityDestructionIntent : NSObject {

	BOOL _shouldRemoveFromHistory;
	unsigned long long _animation;

}

@property (assign,nonatomic) unsigned long long animation;              //@synthesize animation=_animation - In the implementation block
@property (assign,nonatomic) BOOL shouldRemoveFromHistory;              //@synthesize shouldRemoveFromHistory=_shouldRemoveFromHistory - In the implementation block
-(unsigned long long)animation;
-(void)setAnimation:(unsigned long long)arg1 ;
-(BOOL)shouldRemoveFromHistory;
-(void)setShouldRemoveFromHistory:(BOOL)arg1 ;
@end

