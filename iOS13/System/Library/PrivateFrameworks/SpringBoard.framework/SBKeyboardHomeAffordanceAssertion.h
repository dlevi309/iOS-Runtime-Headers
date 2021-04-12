/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class UIWindow;

@interface SBKeyboardHomeAffordanceAssertion : NSObject {

	double _additionalEdgeMargin;
	UIWindow* _sourceWindow;

}

@property (assign,nonatomic,__weak) UIWindow * sourceWindow;              //@synthesize sourceWindow=_sourceWindow - In the implementation block
@property (assign,nonatomic) double additionalEdgeMargin;                 //@synthesize additionalEdgeMargin=_additionalEdgeMargin - In the implementation block
+(id)assertionForGestureWindow:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)setAdditionalEdgeMargin:(double)arg1 ;
-(UIWindow *)sourceWindow;
-(double)additionalEdgeMargin;
-(id)initWithGestureWindow:(id)arg1 ;
-(void)setSourceWindow:(UIWindow *)arg1 ;
@end

