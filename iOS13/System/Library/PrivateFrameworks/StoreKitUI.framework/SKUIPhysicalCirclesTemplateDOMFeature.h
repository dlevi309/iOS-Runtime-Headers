/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <libobjc.A.dylib/SKUIDOMFeature.h>

@protocol SKUIPhysicalCirclesTemplateDelegate;
@class IKAppContext, NSMutableArray, NSString;

@interface SKUIPhysicalCirclesTemplateDOMFeature : NSObject <SKUIDOMFeature> {

	IKAppContext* _appContext;
	id<SKUIPhysicalCirclesTemplateDelegate> _delegate;
	NSMutableArray* _domUpdateBlocks;
	NSString* _featureName;
	NSMutableArray* _pendingAnimationRequests;

}

@property (assign,nonatomic,__weak) id<SKUIPhysicalCirclesTemplateDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * featureName;                                        //@synthesize featureName=_featureName - In the implementation block
@property (nonatomic,__weak,readonly) IKAppContext * appContext;                                   //@synthesize appContext=_appContext - In the implementation block
+(id)featureName;
+(id)makeFeatureJSObjectForFeature:(id)arg1 ;
-(id<SKUIPhysicalCirclesTemplateDelegate>)delegate;
-(void)setDelegate:(id<SKUIPhysicalCirclesTemplateDelegate>)arg1 ;
-(NSString *)featureName;
-(IKAppContext *)appContext;
-(id)initWithDOMNode:(id)arg1 featureName:(id)arg2 ;
-(void)finishDOMUpdates;
-(id)popPendingAnimationRequests;
-(void)_addDOMUpdateBlock:(/*^block*/id)arg1 ;
-(void)_requestAnimation:(id)arg1 ;
@end

