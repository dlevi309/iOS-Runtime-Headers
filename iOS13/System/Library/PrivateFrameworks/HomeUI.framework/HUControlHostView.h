/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

