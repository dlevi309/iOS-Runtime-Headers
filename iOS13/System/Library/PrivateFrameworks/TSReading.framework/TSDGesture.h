/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

@class NSString, TSDRep;


@protocol TSDGesture <NSObject>
@property (nonatomic,retain) id<TSDGestureTarget> cachedGestureTarget; 
@property (assign,nonatomic) id<TSDGestureDelegate> gestureDelegate; 
@property (nonatomic,retain) NSString * gestureKind; 
@property (nonatomic,retain) TSDRep * targetRep; 
@property (nonatomic,readonly) int gestureState; 
@required
-(BOOL)isDone;
-(int)gestureState;
-(CGPoint*)unscaledLocationForICC:(id)arg1;
-(NSString *)gestureKind;
-(void)setGestureDelegate:(id)arg1;
-(void)setGestureKind:(id)arg1;
-(void)setCachedGestureTarget:(id)arg1;
-(id<TSDGestureTarget>)cachedGestureTarget;
-(void)setTargetRep:(id)arg1;
-(TSDRep *)targetRep;
-(CGPoint*)boundsLocationForICC:(id)arg1;
-(CGPoint*)naturalLocationForRep:(id)arg1;
-(id<TSDGestureDelegate>)gestureDelegate;

@end

