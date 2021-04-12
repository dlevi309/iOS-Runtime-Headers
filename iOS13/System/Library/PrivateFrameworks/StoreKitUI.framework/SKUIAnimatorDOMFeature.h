/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <libobjc.A.dylib/SKUIDOMFeature.h>

@protocol SKUIAnimatorDOMFeatureDelegate;
@class IKAppContext, NSString;

@interface SKUIAnimatorDOMFeature : NSObject <SKUIDOMFeature> {

	id<SKUIAnimatorDOMFeatureDelegate> _delegate;
	IKAppContext* _appContext;
	NSString* _featureName;

}

@property (assign,nonatomic,__weak) id<SKUIAnimatorDOMFeatureDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * featureName;                                   //@synthesize featureName=_featureName - In the implementation block
@property (nonatomic,__weak,readonly) IKAppContext * appContext;                              //@synthesize appContext=_appContext - In the implementation block
+(id)featureName;
+(id)makeFeatureJSObjectForFeature:(id)arg1 ;
-(id<SKUIAnimatorDOMFeatureDelegate>)delegate;
-(void)setDelegate:(id<SKUIAnimatorDOMFeatureDelegate>)arg1 ;
-(NSString *)featureName;
-(IKAppContext *)appContext;
-(id)initWithDOMNode:(id)arg1 featureName:(id)arg2 ;
@end

