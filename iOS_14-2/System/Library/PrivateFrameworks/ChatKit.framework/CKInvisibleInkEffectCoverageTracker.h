/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKInvisibleInkEffectCoverageTrackerDelegate;
#import <ChatKit/ChatKit-Structs.h>
@class NSTimer;

@interface CKInvisibleInkEffectCoverageTracker : NSObject {

	double* _expiryTimes;
	unsigned long long _width;
	unsigned long long _height;
	double _cellWidth;
	double _cellHeight;
	NSTimer* _recoverTimer;
	BOOL _uncovered;
	id<CKInvisibleInkEffectCoverageTrackerDelegate> _delegate;
	double _touchLifetime;
	CGSize _size;

}

@property (assign,getter=isUncovered,nonatomic) BOOL uncovered;                                            //@synthesize uncovered=_uncovered - In the implementation block
@property (assign,nonatomic,__weak) id<CKInvisibleInkEffectCoverageTrackerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGSize size;                                                                  //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) double touchLifetime;                                                       //@synthesize touchLifetime=_touchLifetime - In the implementation block
-(BOOL)isUncovered;
-(void)setUncovered:(BOOL)arg1 ;
-(void)_checkForCover:(id)arg1 ;
-(id)initWithSize:(CGSize)arg1 touchLifetime:(double)arg2 ;
-(double)touchLifetime;
-(id<CKInvisibleInkEffectCoverageTrackerDelegate>)delegate;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(void)setDelegate:(id<CKInvisibleInkEffectCoverageTrackerDelegate>)arg1 ;
-(void)recordTouchAtPoint:(CGPoint)arg1 ;
-(void)reset;
-(void)dealloc;
@end

