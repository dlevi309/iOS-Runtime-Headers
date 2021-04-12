/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <libobjc.A.dylib/CKInvisibleInkEffectViewDelegate.h>

@protocol CKInvisibleInkEffectHostView;
@class CKInvisibleInkEffectView, UIView, NSTimer, NSString;

@interface CKInvisibleInkEffectController : NSObject <CKInvisibleInkEffectViewDelegate> {

	BOOL _enabled;
	BOOL _paused;
	BOOL _suspended;
	BOOL _effectViewNeedsReset;
	CKInvisibleInkEffectView* _effectView;
	UIView*<CKInvisibleInkEffectHostView> _hostView;
	NSTimer* _resumeTimer;
	UIView* _borrowedEffectViewSnapshot;

}

@property (nonatomic,retain) CKInvisibleInkEffectView * effectView;                              //@synthesize effectView=_effectView - In the implementation block
@property (assign,nonatomic,__weak) UIView*<CKInvisibleInkEffectHostView> hostView;              //@synthesize hostView=_hostView - In the implementation block
@property (assign,nonatomic) BOOL effectViewNeedsReset;                                          //@synthesize effectViewNeedsReset=_effectViewNeedsReset - In the implementation block
@property (nonatomic,retain) NSTimer * resumeTimer;                                              //@synthesize resumeTimer=_resumeTimer - In the implementation block
@property (nonatomic,retain) UIView * borrowedEffectViewSnapshot;                                //@synthesize borrowedEffectViewSnapshot=_borrowedEffectViewSnapshot - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                      //@synthesize enabled=_enabled - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused;                                        //@synthesize paused=_paused - In the implementation block
@property (assign,getter=isSuspended,nonatomic) BOOL suspended;                                  //@synthesize suspended=_suspended - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)prepareForDisplay;
-(CKInvisibleInkEffectView *)effectView;
-(void)hostViewDidLayoutSubviews;
-(id)initWithHostView:(id)arg1 ;
-(BOOL)isSuspended;
-(void)setSuspended:(BOOL)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(void)setHostView:(UIView*<CKInvisibleInkEffectHostView>)arg1 ;
-(void)hostViewDidUpdateSnapshot:(id)arg1 ;
-(NSTimer *)resumeTimer;
-(void)suspendForTimeInterval:(double)arg1 ;
-(void)resumeTimerFired:(id)arg1 ;
-(void)setEffectViewNeedsReset:(BOOL)arg1 ;
-(void)setResumeTimer:(NSTimer *)arg1 ;
-(BOOL)effectViewNeedsReset;
-(void)setBorrowedEffectViewSnapshot:(UIView *)arg1 ;
-(UIView *)borrowedEffectViewSnapshot;
-(void)_updateBorrowedEffectViewSnapshot;
-(void)invisibleInkEffectViewWasUncovered:(id)arg1 ;
-(void)updateBorrowedEffectViewSnapshot;
-(void)setEffectView:(CKInvisibleInkEffectView *)arg1 ;
-(UIView*<CKInvisibleInkEffectHostView>)hostView;
-(BOOL)isEnabled;
-(void)returnBorrowedEffectView;
-(id)borrowEffectView;
-(BOOL)isPaused;
-(void)dealloc;
@end

