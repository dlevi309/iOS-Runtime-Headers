/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <libobjc.A.dylib/NPKPassesDataSource.h>

@class NSHashTable, NSArray, NSString;

@interface NPKExpressPassesManager : NSObject <NPKPassesDataSource> {

	NSHashTable* _observers;
	NSArray* _currentPasses;
	NSArray* _currentPaymentPasses;

}

@property (nonatomic,retain) NSHashTable * observers;                     //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSArray * currentPasses;                     //@synthesize currentPasses=_currentPasses - In the implementation block
@property (nonatomic,retain) NSArray * currentPaymentPasses;              //@synthesize currentPaymentPasses=_currentPaymentPasses - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)unregisterObserver:(id)arg1 ;
-(void)registerObserver:(id)arg1 ;
-(NSHashTable *)observers;
-(id)init;
-(id)paymentPasses;
-(void)enableRemoteUpdates;
-(void)setObservers:(NSHashTable *)arg1 ;
-(id)passes;
-(void)removePass:(id)arg1 ;
-(void)reloadPasses;
-(void)reloadPassesWithCompletion:(/*^block*/id)arg1 ;
-(NSArray *)currentPasses;
-(NSArray *)currentPaymentPasses;
-(void)setCurrentPasses:(NSArray *)arg1 ;
-(void)setCurrentPaymentPasses:(NSArray *)arg1 ;
-(id)passForUniqueID:(id)arg1 ;
-(BOOL)shouldAllowMovingItemAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(void)movePassAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(void)setDefaultPaymentPass:(id)arg1 ;
-(void)suppressRemoteUpdates;
-(void)updateWithExpressPass:(id)arg1 siblingExpressPasses:(id)arg2 ;
@end

