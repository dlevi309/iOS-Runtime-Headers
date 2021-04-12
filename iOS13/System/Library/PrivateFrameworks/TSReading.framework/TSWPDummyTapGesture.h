/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDGesture.h>

@protocol TSDGestureTarget, TSDGestureDelegate;
@class NSString, TSDRep;

@interface TSWPDummyTapGesture : NSObject <TSDGesture> {

	int gestureState;
	id<TSDGestureTarget> cachedGestureTarget;
	id<TSDGestureDelegate> gestureDelegate;
	NSString* _gestureKind;
	TSDRep* targetRep;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<TSDGestureTarget> cachedGestureTarget; 
@property (assign,nonatomic) id<TSDGestureDelegate> gestureDelegate; 
@property (nonatomic,retain) NSString * gestureKind;                                //@synthesize gestureKind=_gestureKind - In the implementation block
@property (nonatomic,retain) TSDRep * targetRep; 
@property (nonatomic,readonly) int gestureState; 
-(void)dealloc;
-(id)initWithKind:(id)arg1 ;
-(BOOL)isDone;
-(int)gestureState;
-(CGPoint)unscaledLocationForICC:(id)arg1 ;
-(NSString *)gestureKind;
-(void)setGestureDelegate:(id<TSDGestureDelegate>)arg1 ;
-(void)setGestureKind:(NSString *)arg1 ;
-(void)setCachedGestureTarget:(id<TSDGestureTarget>)arg1 ;
-(id<TSDGestureTarget>)cachedGestureTarget;
-(void)setTargetRep:(TSDRep *)arg1 ;
-(TSDRep *)targetRep;
-(CGPoint)boundsLocationForICC:(id)arg1 ;
-(CGPoint)naturalLocationForRep:(id)arg1 ;
-(id<TSDGestureDelegate>)gestureDelegate;
@end

