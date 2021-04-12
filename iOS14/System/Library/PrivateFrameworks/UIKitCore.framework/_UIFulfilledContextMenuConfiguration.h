/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol NSCopying;
@class UIViewController, UIMenu;

@interface _UIFulfilledContextMenuConfiguration : NSObject {

	id<NSCopying> _identifier;
	UIViewController* _previewViewController;
	UIMenu* _menu;

}

@property (nonatomic,copy) id<NSCopying> identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) UIViewController * previewViewController;              //@synthesize previewViewController=_previewViewController - In the implementation block
@property (nonatomic,copy) UIMenu * menu;                                           //@synthesize menu=_menu - In the implementation block
-(UIMenu *)menu;
-(void)setMenu:(UIMenu *)arg1 ;
-(BOOL)isPresentable;
-(void)setIdentifier:(id<NSCopying>)arg1 ;
-(id<NSCopying>)identifier;
-(void)setPreviewViewController:(UIViewController *)arg1 ;
-(UIViewController *)previewViewController;
@end

