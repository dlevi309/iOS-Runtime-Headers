/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@class NSMutableArray, NSMutableString, NSMutableOrderedSet, NSMapTable, NSArray, NSString;

@interface SKUIMetricsImpressionSession : NSObject {

	NSMutableArray* _impressionIdentifiers;
	NSMutableString* _impressionsString;
	NSMutableOrderedSet* _impressionableViewElements;
	NSMapTable* _impressionableViewElementsTimerMap;

}

@property (nonatomic,copy,readonly) NSArray * impressionIdentifiers;                   //@synthesize impressionIdentifiers=_impressionIdentifiers - In the implementation block
@property (nonatomic,copy,readonly) NSString * impressionsString;                      //@synthesize impressionsString=_impressionsString - In the implementation block
@property (nonatomic,copy,readonly) NSArray * impressionableViewElements; 
-(id)init;
-(void)addItemIdentifier:(long long)arg1 ;
-(NSArray *)impressionIdentifiers;
-(NSArray *)impressionableViewElements;
-(NSString *)impressionsString;
-(void)beginActiveImpressionForViewElement:(id)arg1 ;
-(void)endAllPendingActiveImpression;
-(void)endActiveImpressionForViewElement:(id)arg1 ;
-(void)addItemViewElement:(id)arg1 ;
-(id)_getTimerForViewElement:(id)arg1 ;
-(void)_clearTimerForViewElement:(id)arg1 ;
-(void)_setTimer:(id)arg1 forViewElement:(id)arg2 ;
-(id)_allViewElementsInTimerMap;
@end

