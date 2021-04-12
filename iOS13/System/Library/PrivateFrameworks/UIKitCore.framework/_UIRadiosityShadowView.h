/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIView.h>

@class UIBezierPath, CALayer;

@interface _UIRadiosityShadowView : UIView {

	BOOL _needsPunchout;
	UIBezierPath* _shadowPath;
	CALayer* _punchoutLayer;

}

@property (nonatomic,retain) UIBezierPath * shadowPath;              //@synthesize shadowPath=_shadowPath - In the implementation block
@property (nonatomic,retain) CALayer * punchoutLayer;                //@synthesize punchoutLayer=_punchoutLayer - In the implementation block
@property (assign,nonatomic) BOOL needsPunchout;                     //@synthesize needsPunchout=_needsPunchout - In the implementation block
-(void)setShadowPath:(UIBezierPath *)arg1 ;
-(UIBezierPath *)shadowPath;
-(void)setPunchoutLayer:(CALayer *)arg1 ;
-(CALayer *)punchoutLayer;
-(id)initWithSourceView:(id)arg1 shadowPath:(id)arg2 isSoft:(BOOL)arg3 ;
-(void)setNeedsPunchout:(BOOL)arg1 ;
-(BOOL)needsPunchout;
@end

