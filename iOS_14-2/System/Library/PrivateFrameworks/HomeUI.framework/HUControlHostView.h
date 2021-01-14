/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UIView.h>

@class UIView, NSArray;

@interface HUControlHostView : UIView {

	BOOL _requiresWellDefinedSize;
	UIView* _controlView;
	NSArray* _controlConstraints;

}

@property (nonatomic,retain) NSArray * controlConstraints;              //@synthesize controlConstraints=_controlConstraints - In the implementation block
@property (assign,nonatomic) BOOL requiresWellDefinedSize;              //@synthesize requiresWellDefinedSize=_requiresWellDefinedSize - In the implementation block
@property (nonatomic,retain) UIView * controlView;                      //@synthesize controlView=_controlView - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(void)updateConstraints;
-(UIView *)controlView;
-(void)setControlView:(UIView *)arg1 ;
-(id)initWithControlView:(id)arg1 ;
-(void)setRequiresWellDefinedSize:(BOOL)arg1 ;
-(NSArray *)controlConstraints;
-(void)setControlConstraints:(NSArray *)arg1 ;
-(BOOL)requiresWellDefinedSize;
@end

