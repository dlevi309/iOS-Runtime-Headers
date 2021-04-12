/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <UIKitCore/UIView.h>

@protocol BCSAction;
@class UIImageView;

@interface SFQRImageHeaderView : UIView {

	UIImageView* _iconView;
	id<BCSAction> _action;

}

@property (assign,nonatomic,__weak) id<BCSAction> action;              //@synthesize action=_action - In the implementation block
-(id<BCSAction>)action;
-(id)_title;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setAction:(id<BCSAction>)arg1 ;
-(id)_actionTypeString;
@end

