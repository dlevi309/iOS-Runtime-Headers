/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setPassthroughViews:(NSArray *)arg1 ;
-(NSArray *)passthroughViews;
-(id<CKDismissViewDelegate>)delegate;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setDelegate:(id<CKDismissViewDelegate>)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
@end

