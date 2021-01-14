/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

@class SBIcon;


@protocol SBIconDragPreview
@property (assign,nonatomic) unsigned long long dragState; 
@property (assign,getter=isFlocked,nonatomic) BOOL flocked; 
@property (assign,nonatomic) BOOL iconAllowsLabelArea; 
@property (assign,nonatomic) BOOL iconCanShowCloseBox; 
@property (assign,nonatomic) double iconContentScale; 
@property (assign,nonatomic) BOOL iconIsEditing; 
@property (nonatomic,retain) SBIcon * icon; 
@required
-(void)setIconContentScale:(double)arg1;
-(SBIcon *)icon;
-(double)iconContentScale;
-(void)setIcon:(id)arg1;
-(void)updateDestinationIconLocation:(id)arg1 allowsLabelArea:(BOOL)arg2 animated:(BOOL)arg3;
-(void)setFlocked:(BOOL)arg1;
-(void)dropDestinationAnimationCompleted;
-(void)draggingSourceCancelAnimationCompleted;
-(void)draggingSourceDroppedWithOperation:(unsigned long long)arg1;
-(void)setIconAllowsLabelArea:(BOOL)arg1;
-(void)setIconIsEditing:(BOOL)arg1 animated:(BOOL)arg2;
-(void)setDragState:(unsigned long long)arg1;
-(unsigned long long)dragState;
-(void)setIconCanShowCloseBox:(BOOL)arg1;
-(BOOL)isFlocked;
-(BOOL)iconAllowsLabelArea;
-(BOOL)iconCanShowCloseBox;
-(BOOL)iconIsEditing;
-(void)setIconIsEditing:(BOOL)arg1;

@end

