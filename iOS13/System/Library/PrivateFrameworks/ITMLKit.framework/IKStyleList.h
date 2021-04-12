/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


@class NSString, NSArray, IKViewElementStyle;

@interface IKStyleList : NSObject {

	BOOL _requiresMediaQueryEvaluation;
	BOOL _resolutionDone;
	NSString* _classSelector;
	IKStyleList* _baseStyleList;
	NSArray* _styles;
	IKViewElementStyle* _resolvedStyle;

}

@property (nonatomic,retain,readonly) IKStyleList * baseStyleList;                     //@synthesize baseStyleList=_baseStyleList - In the implementation block
@property (nonatomic,copy,readonly) NSArray * styles;                                  //@synthesize styles=_styles - In the implementation block
@property (nonatomic,readonly) BOOL requiresMediaQueryEvaluation;                      //@synthesize requiresMediaQueryEvaluation=_requiresMediaQueryEvaluation - In the implementation block
@property (nonatomic,retain) IKViewElementStyle * resolvedStyle;                       //@synthesize resolvedStyle=_resolvedStyle - In the implementation block
@property (assign,getter=isResolutionDone,nonatomic) BOOL resolutionDone;              //@synthesize resolutionDone=_resolutionDone - In the implementation block
@property (nonatomic,copy,readonly) NSString * classSelector;                          //@synthesize classSelector=_classSelector - In the implementation block
-(NSArray *)styles;
-(BOOL)requiresMediaQueryEvaluation;
-(void)_resolveWithMediaQueryEvaluator:(id)arg1 ;
-(BOOL)isResolutionDone;
-(IKViewElementStyle *)resolvedStyle;
-(void)setResolvedStyle:(IKViewElementStyle *)arg1 ;
-(void)setResolutionDone:(BOOL)arg1 ;
-(IKStyleList *)baseStyleList;
-(void)setNeedsReresolution;
-(id)resolvedStyleWithMediaQueryEvaluator:(id)arg1 ;
-(id)initWithClassSelector:(id)arg1 styles:(id)arg2 baseStyleList:(id)arg3 ;
-(NSString *)classSelector;
@end

