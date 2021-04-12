/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSMutableDictionary, UIView;

@interface _UIViewPropertyAnimationDescription : NSObject {

	NSMutableDictionary* _updates;
	UIView* _view;

}

@property (nonatomic,readonly) NSMutableDictionary * updates;              //@synthesize updates=_updates - In the implementation block
@property (nonatomic,__weak,readonly) UIView * view;                       //@synthesize view=_view - In the implementation block
-(id)init;
-(UIView *)view;
-(id)initWithView:(id)arg1 ;
-(void)_addUpdate:(id)arg1 ;
-(NSMutableDictionary *)updates;
@end

