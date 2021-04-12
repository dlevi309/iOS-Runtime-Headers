/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<CKInvisibleInkEffectViewDelegate>)delegate;
-(void)setDelegate:(id<CKInvisibleInkEffectViewDelegate>)arg1 ;
-(void)setSuspended:(BOOL)arg1 ;
-(BOOL)isSuspended;
-(void)reset;
-(BOOL)isPaused;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CKInvisibleInkEffectCoverageTracker *)coverageTracker;
-(void)invisibleInkEffectCoverageTrackerDidUncover:(id)arg1 ;
-(void)setCoverageTracker:(CKInvisibleInkEffectCoverageTracker *)arg1 ;
@end

