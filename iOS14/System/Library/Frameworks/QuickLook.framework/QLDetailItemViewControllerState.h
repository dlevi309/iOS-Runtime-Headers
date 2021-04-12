/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)actionButtonTitle;
-(void)setActionButtonView:(UIView *)arg1 ;
-(void)setInformationVisible:(BOOL)arg1 ;
-(UIView *)actionButtonView;
-(BOOL)isInformationVisible;
@end

