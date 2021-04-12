/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class NSMutableArray;

@interface SBPIPContentViewLayoutSettings : NSObject {

	long long _position;
	double _size;
	NSMutableArray* _observers;

}

@property (assign,nonatomic) long long position; 
@property (assign,nonatomic) double size; 
+(void)addObserver:(id)arg1 ;
+(void)removeObserver:(id)arg1 ;
+(id)_sharedInstance;
+(void)setContentViewPosition:(long long)arg1 ;
+(void)setContentViewSize:(CGSize)arg1 ;
+(double)contentViewPadding;
+(long long)currentContentViewPosition;
+(CGSize)currentContentViewSizeForAspectRatio:(CGSize)arg1 ;
+(CGSize)defaultContentViewSizeForAspectRatio:(CGSize)arg1 ;
+(CGSize)minimumContentViewSizeForAspectRatio:(CGSize)arg1 ;
+(CGSize)maximumContentViewSizeForAspectRatio:(CGSize)arg1 ;
-(id)init;
-(double)size;
-(void)_removeObserver:(id)arg1 ;
-(long long)position;
-(void)setSize:(double)arg1 ;
-(void)setPosition:(long long)arg1 ;
-(void)_addObserver:(id)arg1 ;
-(void)_notifyObservers;
@end

