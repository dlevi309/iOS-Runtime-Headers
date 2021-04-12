/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKActionMenuControllerDelegate;
#import <ChatKit/ChatKit-Structs.h>
@class NSArray, CKActionMenuView;

@interface CKActionMenuController : NSObject {

	unsigned long long _defaultActionIndex;
	id<CKActionMenuControllerDelegate> _delegate;
	NSArray* _passthroughViews;
	CKActionMenuView* _actionMenuView;

}

@property (nonatomic,retain) CKActionMenuView * actionMenuView;                                //@synthesize actionMenuView=_actionMenuView - In the implementation block
@property (nonatomic,copy,readonly) NSArray * actionMenuItems; 
@property (nonatomic,readonly) unsigned long long defaultActionIndex;                          //@synthesize defaultActionIndex=_defaultActionIndex - In the implementation block
@property (assign,nonatomic,__weak) id<CKActionMenuControllerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * passthroughViews;                                         //@synthesize passthroughViews=_passthroughViews - In the implementation block
@property (getter=isActionMenuVisible,nonatomic,readonly) BOOL actionMenuVisible; 
-(void)dealloc;
-(id<CKActionMenuControllerDelegate>)delegate;
-(void)setDelegate:(id<CKActionMenuControllerDelegate>)arg1 ;
-(NSArray *)passthroughViews;
-(void)setPassthroughViews:(NSArray *)arg1 ;
-(BOOL)isActionMenuVisible;
-(void)dismissActionMenuAnimated:(BOOL)arg1 ;
-(NSArray *)actionMenuItems;
-(void)setActionMenuItems:(id)arg1 defaultActionIndex:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(id)initWithActionMenuItems:(id)arg1 defaultActionIndex:(unsigned long long)arg2 blurEffectStyle:(long long)arg3 ;
-(void)presentActionMenuFromPoint:(CGPoint)arg1 inView:(id)arg2 animated:(BOOL)arg3 ;
-(CGRect)convertActionMenuFrameToView:(id)arg1 ;
-(void)setActionMenuView:(CKActionMenuView *)arg1 ;
-(CKActionMenuView *)actionMenuView;
-(unsigned long long)defaultActionIndex;
@end

