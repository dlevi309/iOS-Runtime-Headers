/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UIView.h>

@class UIViewController;

@interface MRUEmbeddingView : UIView {

	BOOL _active;
	UIViewController* _embeddedViewController;
	UIViewController* _parent;

}

@property (nonatomic,retain) UIViewController * embeddedViewController;              //@synthesize embeddedViewController=_embeddedViewController - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * parent;                       //@synthesize parent=_parent - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                            //@synthesize active=_active - In the implementation block
-(void)setActive:(BOOL)arg1 ;
-(UIViewController *)parent;
-(BOOL)isActive;
-(void)setParent:(UIViewController *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIViewController *)embeddedViewController;
-(void)setEmbeddedViewController:(UIViewController *)arg1 ;
-(void)removeViewController;
-(void)showViewController;
-(void)hideViewController;
-(void)embedViewController:(id)arg1 parent:(id)arg2 ;
@end

