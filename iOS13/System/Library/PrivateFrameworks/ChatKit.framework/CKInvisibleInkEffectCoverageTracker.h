/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	BOOL _uncovered;
	NSTimer* _recoverTimer;
	id<CKInvisibleInkEffectCoverageTrackerDelegate> _delegate;
	double _touchLifetime;
	CGSize _size;

}

@property (assign,nonatomic,__weak) id<CKInvisibleInkEffectCoverageTrackerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGSize size;                                                                  //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) double touchLifetime;                                                       //@synthesize touchLifetime=_touchLifetime - In the implementation block
-(void)dealloc;
-(id<CKInvisibleInkEffectCoverageTrackerDelegate>)delegate;
-(void)setDelegate:(id<CKInvisibleInkEffectCoverageTrackerDelegate>)arg1 ;
-(CGSize)size;
-(void)reset;
-(void)setSize:(CGSize)arg1 ;
-(void)recordTouchAtPoint:(CGPoint)arg1 ;
-(void)_checkForCover:(id)arg1 ;
-(id)initWithSize:(CGSize)arg1 touchLifetime:(double)arg2 ;
-(double)touchLifetime;
@end

