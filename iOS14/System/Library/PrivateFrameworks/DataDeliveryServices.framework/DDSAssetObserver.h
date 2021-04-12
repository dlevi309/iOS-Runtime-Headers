/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
*/

#import <libobjc.A.dylib/DDSAssetObserving.h>

@protocol DDSAssetObservingDelegate;
@class NSSet, NSString;

@interface DDSAssetObserver : NSObject <DDSAssetObserving> {

	id<DDSAssetObservingDelegate> _delegate;
	NSSet* _typesToObserve;

}

@property (assign,nonatomic,__weak) id<DDSAssetObservingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSSet * typesToObserve;                                     //@synthesize typesToObserve=_typesToObserve - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)beginObservingTypes:(id)arg1 ;
-(id<DDSAssetObservingDelegate>)delegate;
-(void)endObservingTypes:(id)arg1 ;
-(void)setTypesToObserve:(NSSet *)arg1 ;
-(void)setDelegate:(id<DDSAssetObservingDelegate>)arg1 ;
-(void)observeAssetTypes:(id)arg1 ;
-(void)notifyObserversAssetsUpdatedForType:(id)arg1 ;
-(NSSet *)typesToObserve;
-(void)dealloc;
@end

