/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@interface SBApplicationSceneEntityDestructionIntent : NSObject {

	BOOL _shouldRemoveFromHistory;
	unsigned long long _layoutRoles;
	unsigned long long _animation;

}

@property (assign,nonatomic) unsigned long long layoutRoles;              //@synthesize layoutRoles=_layoutRoles - In the implementation block
@property (assign,nonatomic) unsigned long long animation;                //@synthesize animation=_animation - In the implementation block
@property (assign,nonatomic) BOOL shouldRemoveFromHistory;                //@synthesize shouldRemoveFromHistory=_shouldRemoveFromHistory - In the implementation block
-(unsigned long long)animation;
-(void)setAnimation:(unsigned long long)arg1 ;
-(BOOL)shouldRemoveFromHistory;
-(unsigned long long)layoutRoles;
-(void)setLayoutRoles:(unsigned long long)arg1 ;
-(void)setShouldRemoveFromHistory:(BOOL)arg1 ;
@end

