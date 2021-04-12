/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,copy,readonly) NSString * featureName;                                   //@synthesize featureName=_featureName - In the implementation block
@property (nonatomic,__weak,readonly) IKAppContext * appContext;                              //@synthesize appContext=_appContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)featureName;
+(id)makeFeatureJSObjectForFeature:(id)arg1 ;
-(id<SKUIAnimatorDOMFeatureDelegate>)delegate;
-(void)setDelegate:(id<SKUIAnimatorDOMFeatureDelegate>)arg1 ;
-(IKAppContext *)appContext;
-(NSString *)featureName;
-(id)initWithDOMNode:(id)arg1 featureName:(id)arg2 ;
@end

