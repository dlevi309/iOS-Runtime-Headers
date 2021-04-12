/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

@class SBIcon;


@protocol SBIconDragPreview
@property (assign,nonatomic) unsigned long long dragState; 
@property (assign,getter=isFlocked,nonatomic) BOOL flocked; 
@property (assign,nonatomic) BOOL iconAllowsLabelArea; 
@property (assign,nonatomic) double iconContentScale; 
@property (assign,nonatomic) BOOL iconIsEditing; 
@property (nonatomic,retain) SBIcon * icon; 
@required
-(SBIcon *)icon;
-(void)setIcon:(id)arg1;
-(void)setDragState:(unsigned long long)arg1;
-(unsigned long long)dragState;
-(double)iconContentScale;
-(void)setIconContentScale:(double)arg1;
-(void)draggingSourceDroppedWithOperation:(unsigned long long)arg1;
-(void)draggingSourceCancelAnimationCompleted;
-(void)dropDestinationAnimationCompleted;
-(BOOL)isFlocked;
-(void)setFlocked:(BOOL)arg1;
-(BOOL)iconAllowsLabelArea;
-(void)setIconAllowsLabelArea:(BOOL)arg1;
-(BOOL)iconIsEditing;
-(void)setIconIsEditing:(BOOL)arg1;

@end

