/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol CKDismissViewDelegate;
@class NSArray;

@interface CKDismissView : UIView {

	id<CKDismissViewDelegate> _delegate;
	NSArray* _passthroughViews;

}

@property (assign,nonatomic,__weak) id<CKDismissViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * passthroughViews;                               //@synthesize passthroughViews=_passthroughViews - In the implementation block
-(id<CKDismissViewDelegate>)delegate;
-(void)setDelegate:(id<CKDismissViewDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(NSArray *)passthroughViews;
-(void)setPassthroughViews:(NSArray *)arg1 ;
@end

