/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)invalidate;
-(void)dealloc;
-(UIWindow *)sourceWindow;
-(double)additionalEdgeMargin;
-(id)initWithGestureWindow:(id)arg1 ;
-(void)setAdditionalEdgeMargin:(double)arg1 ;
-(void)setSourceWindow:(UIWindow *)arg1 ;
@end

