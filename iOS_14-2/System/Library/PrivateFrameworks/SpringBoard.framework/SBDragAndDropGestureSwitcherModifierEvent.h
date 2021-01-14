/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGRect)platterViewFrame;
-(void)setPlatterViewFrame:(CGRect)arg1 ;
-(long long)dropAction;
-(void)setDropAction:(long long)arg1 ;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDraggedSceneIdentifier:(NSString *)arg1 ;
-(NSString *)draggedSceneIdentifier;
-(double)platterScale;
-(void)setPlatterScale:(double)arg1 ;
@end

