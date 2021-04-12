/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <UIKitCore/UIView.h>

@interface TLKProminenceView : UIView {

	unsigned long long _prominence;

}

@property (assign,nonatomic) unsigned long long prominence;              //@synthesize prominence=_prominence - In the implementation block
+(id)viewWithProminence:(unsigned long long)arg1 ;
-(id)init;
-(void)didMoveToWindow;
-(void)_dynamicUserInterfaceTraitDidChange;
-(unsigned long long)prominence;
-(void)setProminence:(unsigned long long)arg1 ;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(id)initWithProminence:(unsigned long long)arg1 ;
@end

