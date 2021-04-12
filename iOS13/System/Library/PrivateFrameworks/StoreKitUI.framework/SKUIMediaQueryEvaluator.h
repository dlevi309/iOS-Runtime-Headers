/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id<SKUIMediaQueryDelegate>)delegate;
-(void)setDelegate:(id<SKUIMediaQueryDelegate>)arg1 ;
-(void)reloadData;
-(BOOL)evaluateMediaQuery:(id)arg1 ;
-(void)_featureDidChangeNotification:(id)arg1 ;
-(id)_delegateValuesForKeys:(id)arg1 ;
@end

