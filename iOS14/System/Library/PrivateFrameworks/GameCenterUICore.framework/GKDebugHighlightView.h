/*
* Generated on Thursday, January 14, 2021 at 2:27:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUICore.framework/GameCenterUICore
*/

#import <GameCenterUICore/GameCenterUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, NSString;

@interface GKDebugHighlightView : UIView {

	BOOL _isOval;
	UIColor* _color;
	NSString* _caption;

}

@property (nonatomic,retain) UIColor * color;                 //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) NSString * caption;              //@synthesize caption=_caption - In the implementation block
@property (assign,nonatomic) BOOL isOval;                     //@synthesize isOval=_isOval - In the implementation block
-(NSString *)caption;
-(void)setCaption:(NSString *)arg1 ;
-(id)init;
-(UIColor *)color;
-(void)drawRect:(CGRect)arg1 ;
-(BOOL)isOval;
-(void)setColor:(UIColor *)arg1 ;
-(void)setIsOval:(BOOL)arg1 ;
@end

