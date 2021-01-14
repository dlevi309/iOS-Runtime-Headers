/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CKInvisibleInkEffectCoverageTrackerDelegate.h>

@protocol CKInvisibleInkEffectViewDelegate;
@class UIImage, CKInvisibleInkEffectCoverageTracker, NSString;

@interface CKInvisibleInkEffectView : UIView <CKInvisibleInkEffectCoverageTrackerDelegate> {

	BOOL _suspended;
	BOOL _paused;
	id<CKInvisibleInkEffectViewDelegate> _delegate;
	UIImage* _image;
	CKInvisibleInkEffectCoverageTracker* _coverageTracker;

}

@property (nonatomic,retain) CKInvisibleInkEffectCoverageTracker * coverageTracker;              //@synthesize coverageTracker=_coverageTracker - In the implementation block
@property (assign,nonatomic,__weak) id<CKInvisibleInkEffectViewDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIImage * image;                                                    //@synthesize image=_image - In the implementation block
@property (assign,getter=isSuspended,nonatomic) BOOL suspended;                                  //@synthesize suspended=_suspended - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused;                                        //@synthesize paused=_paused - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(double)updateInterval;
-(void)invisibleInkEffectCoverageTrackerDidUncover:(id)arg1 ;
-(BOOL)isSuspended;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSuspended:(BOOL)arg1 ;
-(id<CKInvisibleInkEffectViewDelegate>)delegate;
-(void)setPaused:(BOOL)arg1 ;
-(UIImage *)image;
-(void)moveEmittersForTouchesBegan:(id)arg1 ;
-(void)moveEmittersForTouchesMoved:(id)arg1 ;
-(void)endEmittersForTouchesEnded:(id)arg1 ;
-(void)endEmittersForTouchesCancelled:(id)arg1 ;
-(void)setDelegate:(id<CKInvisibleInkEffectViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setCoverageTracker:(CKInvisibleInkEffectCoverageTracker *)arg1 ;
-(CKInvisibleInkEffectCoverageTracker *)coverageTracker;
-(void)reset;
-(BOOL)isPaused;
@end

