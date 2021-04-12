/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@class NSMutableArray;

@interface SKUIMetricsDOMChangeQueue : NSObject {

	NSMutableArray* _storage;

}

@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (nonatomic,readonly) unsigned long long count; 
-(id)init;
-(unsigned long long)count;
-(BOOL)isEmpty;
-(void)addPendingChange:(id)arg1 ;
-(id)oldestPendingChange;
@end

