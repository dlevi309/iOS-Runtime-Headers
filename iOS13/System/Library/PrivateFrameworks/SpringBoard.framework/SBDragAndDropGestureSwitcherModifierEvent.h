/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBGestureSwitcherModifierEvent.h>

@class NSString;

@interface SBDragAndDropGestureSwitcherModifierEvent : SBGestureSwitcherModifierEvent {

	long long _dropAction;
	NSString* _draggedSceneIdentifier;
	double _platterScale;
	CGRect _platterViewFrame;

}

@property (assign,nonatomic) long long dropAction;                           //@synthesize dropAction=_dropAction - In the implementation block
@property (nonatomic,retain) NSString * draggedSceneIdentifier;              //@synthesize draggedSceneIdentifier=_draggedSceneIdentifier - In the implementation block
@property (assign,nonatomic) CGRect platterViewFrame;                        //@synthesize platterViewFrame=_platterViewFrame - In the implementation block
@property (assign,nonatomic) double platterScale;                            //@synthesize platterScale=_platterScale - In the implementation block
-(long long)type;
-(CGRect)platterViewFrame;
-(void)setPlatterViewFrame:(CGRect)arg1 ;
-(long long)dropAction;
-(void)setDropAction:(long long)arg1 ;
-(NSString *)draggedSceneIdentifier;
-(void)setDraggedSceneIdentifier:(NSString *)arg1 ;
-(double)platterScale;
-(void)setPlatterScale:(double)arg1 ;
@end

