/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/


@protocol UITraitEnvironment, TVMediaQueryEvaluatorDelegate;
#import <TVMLKit/TVMLKit-Structs.h>
@class _TVWindowSizeAdaptor, IKViewElement;

@interface TVMediaQueryEvaluator : NSObject {

	_TVWindowSizeAdaptor* _windowSizeAdaptor;
	struct {
		unsigned respondsToEvaluate : 1;
	}  _implFlags;
	IKViewElement* _templateElement;
	id<UITraitEnvironment> _traitEnvironment;
	id<TVMediaQueryEvaluatorDelegate> _delegate;

}

@property (nonatomic,retain) IKViewElement * templateElement;                                //@synthesize templateElement=_templateElement - In the implementation block
@property (nonatomic,__weak,readonly) id<UITraitEnvironment> traitEnvironment;               //@synthesize traitEnvironment=_traitEnvironment - In the implementation block
@property (nonatomic,retain,readonly) _TVWindowSizeAdaptor * windowSizeAdaptor;              //@synthesize windowSizeAdaptor=_windowSizeAdaptor - In the implementation block
@property (assign,nonatomic,__weak) id<TVMediaQueryEvaluatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)_productType;
+(id)_mobileGestaltStringForKey:(CFStringRef)arg1 ;
+(id)evaluatorForTemplateElement:(id)arg1 inWindow:(id)arg2 traitEnvironment:(id)arg3 ;
+(id)evaluatorForTemplateElement:(id)arg1 inWindow:(id)arg2 ;
-(id<TVMediaQueryEvaluatorDelegate>)delegate;
-(id<UITraitEnvironment>)traitEnvironment;
-(void)setDelegate:(id<TVMediaQueryEvaluatorDelegate>)arg1 ;
-(IKViewElement *)templateElement;
-(void)setTemplateElement:(IKViewElement *)arg1 ;
-(BOOL)evaluateMediaQuery:(id)arg1 ;
-(id)initWithTemplateElement:(id)arg1 ;
-(_TVWindowSizeAdaptor *)windowSizeAdaptor;
-(id)initWithTemplateElement:(id)arg1 inWindow:(id)arg2 traitEnvironment:(id)arg3 ;
-(id)initWithTemplateElement:(id)arg1 inWindow:(id)arg2 ;
-(BOOL)_evaluateTemplateFeatureType:(id)arg1 withValue:(id)arg2 ;
-(BOOL)_evaluateAllMediaFeatureType:(id)arg1 withValue:(id)arg2 ;
-(BOOL)_evaluateDeviceFeatureType:(id)arg1 withValue:(id)arg2 ;
@end

