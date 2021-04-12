/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/


#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
@class NSArray, SUPurchaseManager;

@interface SUPurchaseBatch : NSObject {

	NSArray* _continuations;
	NSArray* _errors;
	NSArray* _items;
	NSArray* _offers;
	SUPurchaseManager* _purchaseManager;
	BOOL _shouldSuspendWhenFinished;
	NSArray* _validPurchases;

}

@property (nonatomic,readonly) NSArray * items;                                       //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) NSArray * offers;                                      //@synthesize offers=_offers - In the implementation block
@property (assign,nonatomic,__weak) SUPurchaseManager * purchaseManager;              //@synthesize purchaseManager=_purchaseManager - In the implementation block
@property (nonatomic,retain) NSArray * continuations;                                 //@synthesize continuations=_continuations - In the implementation block
@property (nonatomic,retain) NSArray * errors;                                        //@synthesize errors=_errors - In the implementation block
@property (nonatomic,retain) NSArray * validPurchases;                                //@synthesize validPurchases=_validPurchases - In the implementation block
-(void)dealloc;
-(NSArray *)errors;
-(NSArray *)items;
-(id)initWithItems:(id)arg1 ;
-(void)setErrors:(NSArray *)arg1 ;
-(NSArray *)offers;
-(void)setDocumentTargetIdentifier:(id)arg1 ;
-(void)setPurchaseManager:(SUPurchaseManager *)arg1 ;
-(NSArray *)continuations;
-(NSArray *)validPurchases;
-(id)initWithItems:(id)arg1 offers:(id)arg2 ;
-(SUPurchaseManager *)purchaseManager;
-(void)setPurchasesAndContinuationsFromPurchases:(id)arg1 ;
-(void)_validateItems;
-(id)copyContinuationsForPurchases:(id)arg1 ;
-(void)setContinuations:(NSArray *)arg1 ;
-(void)setValidPurchases:(NSArray *)arg1 ;
-(/*function pointer*/void*)errorEqualCallback;
-(id)_copyModifiedErrorsFromDictionary:(CFDictionaryRef)arg1 ;
-(id)copyFilteredItemsFromItems:(id)arg1 ;
-(id)_copyValidPurchasesForItems:(id)arg1 ;
-(id)everythingFailedErrorForError:(id)arg1 ;
-(id)mergedErrorForError:(id)arg1 withCount:(long long)arg2 ;
-(id)_copyUniqueErrorsFromErrors:(id)arg1 ;
@end

