/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol NSCopying;
@class UIViewController, UIMenu;

@interface _UIFulfilledContextMenuConfiguration : NSObject {

	id<NSCopying> _identifier;
	UIViewController* _previewViewController;
	UIMenu* _actions;

}

@property (nonatomic,copy) id<NSCopying> identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) UIViewController * previewViewController;              //@synthesize previewViewController=_previewViewController - In the implementation block
@property (nonatomic,copy) UIMenu * actions;                                        //@synthesize actions=_actions - In the implementation block
-(id<NSCopying>)identifier;
-(void)setIdentifier:(id<NSCopying>)arg1 ;
-(UIMenu *)actions;
-(void)setPreviewViewController:(UIViewController *)arg1 ;
-(UIViewController *)previewViewController;
-(void)setActions:(UIMenu *)arg1 ;
-(BOOL)isPresentable;
@end

