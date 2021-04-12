/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <libobjc.A.dylib/SKUIJSDOMFeatureCollectionAppBridge.h>
#import <libobjc.A.dylib/SKUIDOMFeature.h>

@protocol SKUICollectionDOMFeatureTargetting;
@class IKAppContext, NSString;

@interface SKUICollectionDOMFeature : NSObject <SKUIJSDOMFeatureCollectionAppBridge, SKUIDOMFeature> {

	IKAppContext* _appContext;
	NSString* _featureName;
	id<SKUICollectionDOMFeatureTargetting> _collectionTarget;

}

@property (assign,nonatomic,__weak) id<SKUICollectionDOMFeatureTargetting> collectionTarget;              //@synthesize collectionTarget=_collectionTarget - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * featureName;                                               //@synthesize featureName=_featureName - In the implementation block
@property (nonatomic,__weak,readonly) IKAppContext * appContext;                                          //@synthesize appContext=_appContext - In the implementation block
+(id)featureName;
+(id)makeFeatureJSObjectForFeature:(id)arg1 ;
-(NSString *)featureName;
-(IKAppContext *)appContext;
-(id)initWithDOMNode:(id)arg1 featureName:(id)arg2 ;
-(void)setEditing:(BOOL)arg1 options:(id)arg2 ;
-(id<SKUICollectionDOMFeatureTargetting>)collectionTarget;
-(void)setCollectionTarget:(id<SKUICollectionDOMFeatureTargetting>)arg1 ;
@end

