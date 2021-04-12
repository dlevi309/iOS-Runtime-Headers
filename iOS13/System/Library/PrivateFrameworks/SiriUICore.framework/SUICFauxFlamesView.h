/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
*/

#import <SiriUICore/SiriUICore-Structs.h>
#import <UIKitCore/UIView.h>

@interface SUICFauxFlamesView : UIView {

	long long _style;
	double _width;
	SCD_Struct_SU3 _sequenceAttributes;

}
+(id)_frameImagesForSequence:(SCD_Struct_SU3)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)prewarm;
-(void)setHidden:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(BOOL)isAnimating;
-(void)didMoveToSuperview;
-(void)start:(BOOL)arg1 ;
-(void)stop:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 screenSize:(long long)arg2 ;
-(void)_cleanupView;
@end

