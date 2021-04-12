/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SBAppSwitcherPageContentView.h>

@class NSString;

@interface SBAppSwitcherServicePageContentView : UIView <SBAppSwitcherPageContentView> {

	BOOL _active;
	BOOL _visible;
	long long _orientation;

}

@property (assign,nonatomic) long long orientation;                           //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) double cornerRadius; 
@property (nonatomic,readonly) BOOL contentRequiresGroupOpacity; 
@property (assign,getter=isActive,nonatomic) BOOL active;                     //@synthesize active=_active - In the implementation block
@property (assign,getter=isVisible,nonatomic) BOOL visible;                   //@synthesize visible=_visible - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setActive:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)contentRequiresGroupOpacity;
-(BOOL)isActive;
-(void)setVisible:(BOOL)arg1 ;
-(double)cornerRadius;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)isVisible;
-(long long)orientation;
-(void)invalidate;
-(void)setCornerRadius:(double)arg1 ;
-(void)setOrientation:(long long)arg1 ;
@end

