/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@protocol SKUIMediaQueryDelegate, OS_dispatch_source;
@class NSMapTable, NSMutableSet, NSObject;

@interface SKUIMediaQueryEvaluator : NSObject {

	NSMapTable* _cachedFeatureResults;
	id<SKUIMediaQueryDelegate> _delegate;
	NSMutableSet* _observedNotificationNames;
	NSObject*<OS_dispatch_source> _reloadTimer;

}

@property (assign,nonatomic,__weak) id<SKUIMediaQueryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(void)initialize;
+(void)registerFeatureClass:(Class)arg1 ;
-(id)init;
-(id<SKUIMediaQueryDelegate>)delegate;
-(void)setDelegate:(id<SKUIMediaQueryDelegate>)arg1 ;
-(void)reloadData;
-(void)dealloc;
-(void)_featureDidChangeNotification:(id)arg1 ;
-(id)_delegateValuesForKeys:(id)arg1 ;
-(BOOL)evaluateMediaQuery:(id)arg1 ;
@end

