/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
*/

#import <SiriUICore/SiriUICore-Structs.h>
#import <UIKitCore/UIView.h>

@interface SUICFauxFlamesView : UIView {

	long long _style;
	SCD_Struct_SU10 _sequenceAttributes;

}
+(id)_frameImagesForSequence:(SCD_Struct_SU10)arg1 ;
-(void)prewarm;
-(void)start:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)didMoveToSuperview;
-(void)stop:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isAnimating;
-(id)initWithStyle:(long long)arg1 screenSize:(long long)arg2 ;
-(void)_cleanupView;
@end

