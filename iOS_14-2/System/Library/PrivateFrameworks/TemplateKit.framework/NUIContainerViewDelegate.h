/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/


@protocol NUIContainerViewDelegate <NSObject>
@optional
-(CGSize*)containerView:(id)arg1 systemLayoutSizeFittingSize:(CGSize)arg2 forArrangedSubview:(id)arg3;
-(CGRect*)containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(CGRect)arg3;
-(void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(CGSize)arg2 forReason:(long long)arg3;
-(BOOL)containerView:(id)arg1 shouldRestartMeasurementDueToCompressionInAxis:(long long)arg2 forReason:(long long)arg3;
-(void)containerViewDidLayoutArrangedSubviews:(id)arg1;

@end

