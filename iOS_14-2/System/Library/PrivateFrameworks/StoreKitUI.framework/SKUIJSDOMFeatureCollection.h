/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/SKUIJSDOMFeatureCollection.h>

@protocol SKUIJSDOMFeatureCollection <JSExport>
@required
-(void)setEditing:(BOOL)arg1 :(id)arg2;

@end


@protocol SKUIJSDOMFeatureCollectionAppBridge;
@interface SKUIJSDOMFeatureCollection : IKJSObject <SKUIJSDOMFeatureCollection> {

	id<SKUIJSDOMFeatureCollectionAppBridge> _appBridge;

}

@property (assign,nonatomic,__weak) id<SKUIJSDOMFeatureCollectionAppBridge> appBridge;              //@synthesize appBridge=_appBridge - In the implementation block
-(void)setAppBridge:(id<SKUIJSDOMFeatureCollectionAppBridge>)arg1 ;
-(void)setEditing:(BOOL)arg1 :(id)arg2 ;
-(id<SKUIJSDOMFeatureCollectionAppBridge>)appBridge;
@end

