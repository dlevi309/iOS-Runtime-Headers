/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_title;
-(id<BCSAction>)action;
-(void)setAction:(id<BCSAction>)arg1 ;
-(id)_actionTypeString;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

