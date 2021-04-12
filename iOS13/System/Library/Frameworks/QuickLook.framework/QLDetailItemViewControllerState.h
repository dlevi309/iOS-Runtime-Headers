/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/


@class NSString, UIView;

@interface QLDetailItemViewControllerState : NSObject {

	BOOL _informationVisible;
	NSString* _actionButtonTitle;
	UIView* _actionButtonView;

}

@property (retain) NSString * actionButtonTitle;                              //@synthesize actionButtonTitle=_actionButtonTitle - In the implementation block
@property (retain) UIView * actionButtonView;                                 //@synthesize actionButtonView=_actionButtonView - In the implementation block
@property (getter=isInformationVisible) BOOL informationVisible;              //@synthesize informationVisible=_informationVisible - In the implementation block
+(id)detailItemViewControllerStateWithActionButtonTitle:(id)arg1 actionButtonView:(id)arg2 informationVisible:(BOOL)arg3 ;
-(void)setActionButtonTitle:(NSString *)arg1 ;
-(void)setActionButtonView:(UIView *)arg1 ;
-(void)setInformationVisible:(BOOL)arg1 ;
-(NSString *)actionButtonTitle;
-(UIView *)actionButtonView;
-(BOOL)isInformationVisible;
@end

