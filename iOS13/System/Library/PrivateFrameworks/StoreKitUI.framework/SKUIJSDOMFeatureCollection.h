/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<SKUIJSDOMFeatureCollectionAppBridge>)appBridge;
-(void)setEditing:(BOOL)arg1 :(id)arg2 ;
@end

