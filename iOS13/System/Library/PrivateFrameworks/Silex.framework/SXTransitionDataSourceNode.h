/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXTransitionDataSource.h>

@protocol SXTransitionableComponentView;
@class UIView, NSString;

@interface SXTransitionDataSourceNode : NSObject <SXTransitionDataSource> {

	BOOL _usesThumbnail;
	unsigned long long _transitionType;
	id<SXTransitionableComponentView> _componentView;

}

@property (nonatomic,readonly) id<SXTransitionableComponentView> componentView;              //@synthesize componentView=_componentView - In the implementation block
@property (nonatomic,readonly) BOOL usesThumbnail;                                           //@synthesize usesThumbnail=_usesThumbnail - In the implementation block
@property (nonatomic,readonly) unsigned long long transitionType;                            //@synthesize transitionType=_transitionType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * transitionContainerView; 
@property (nonatomic,readonly) UIView * transitionContentView; 
@property (nonatomic,readonly) BOOL transitionViewUsesThumbnail; 
@property (nonatomic,readonly) BOOL transitionViewIsVisible; 
@property (nonatomic,readonly) BOOL transitionViewShouldFadeInContent; 
@property (nonatomic,readonly) CGRect transitionVisibleFrame; 
@property (nonatomic,readonly) CGRect transitionContainerFrame; 
@property (nonatomic,readonly) CGRect transitionContentFrame; 
@property (nonatomic,readonly) BOOL isTransitionable; 
-(id<SXTransitionableComponentView>)componentView;
-(UIView *)transitionContainerView;
-(unsigned long long)transitionType;
-(UIView *)transitionContentView;
-(BOOL)transitionViewIsVisible;
-(BOOL)transitionViewShouldFadeInContent;
-(BOOL)usesThumbnail;
-(CGRect)transitionVisibleFrame;
-(CGRect)transitionContainerFrame;
-(CGRect)transitionContentFrame;
-(BOOL)isTransitionable;
-(BOOL)transitionViewUsesThumbnail;
-(id)initWithComponentView:(id)arg1 transitionType:(unsigned long long)arg2 usesThumbnail:(BOOL)arg3 ;
@end

