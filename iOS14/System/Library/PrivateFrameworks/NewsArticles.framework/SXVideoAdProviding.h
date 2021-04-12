/*
* Generated on Thursday, January 14, 2021 at 2:24:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
*/

@class UIView, UIButton;


@protocol SXVideoAdProviding <SXVideoProviding,SXVideoAdEventTracker>
@property (readonly,nonatomic) unsigned long long skipThreshold; 
@property (readonly,nonatomic) BOOL hasAction; 
@property (readonly,nonatomic) UIView * metricsView; 
@property (readonly,nonatomic) UIButton * privacyMarker; 
@optional
-(UIButton *)privacyMarker;
-(UIView *)metricsView;

@required
-(BOOL)hasAction;
-(unsigned long long)skipThreshold;
-(void)presentAction;

@end

