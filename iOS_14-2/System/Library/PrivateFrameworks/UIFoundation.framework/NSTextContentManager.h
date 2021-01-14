/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

#import <libobjc.A.dylib/NSTextElementProvider.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSTextContentManagerDelegate;
@class NSTextRange, NSTextLayoutManager, NSMutableArray, NSArray, NSString;

@interface NSTextContentManager : NSObject <NSTextElementProvider, NSSecureCoding> {

	NSTextLayoutManager* _primaryTextLayoutManager;
	AQ _transactionStack;
	NSMutableArray* _editHistory;
	NSMutableArray* _textLayoutManagers;
	BOOL _synchronizesTextLayoutManagersAutomatically;
	BOOL _synchronizesToBackingStoreAutomatically;
	id<NSTextContentManagerDelegate> _delegate;
	unsigned long long _maximumNumberOfUncachedElements;

}

@property (__weak) id<NSTextContentManagerDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (copy,readonly) NSArray * textLayoutManagers; 
@property (assign) NSTextLayoutManager * primaryTextLayoutManager; 
@property (assign) unsigned long long maximumNumberOfUncachedElements;              //@synthesize maximumNumberOfUncachedElements=_maximumNumberOfUncachedElements - In the implementation block
@property (readonly) BOOL hasEditingTransaction; 
@property (assign) BOOL synchronizesTextLayoutManagersAutomatically;                //@synthesize synchronizesTextLayoutManagersAutomatically=_synchronizesTextLayoutManagersAutomatically - In the implementation block
@property (assign) BOOL synchronizesToBackingStoreAutomatically;                    //@synthesize synchronizesToBackingStoreAutomatically=_synchronizesToBackingStoreAutomatically - In the implementation block
@property (readonly) NSTextRange * documentRange; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(NSArray *)textLayoutManagers;
-(void)setPrimaryTextLayoutManager:(NSTextLayoutManager *)arg1 ;
-(NSTextLayoutManager *)primaryTextLayoutManager;
-(void)_incrementTransactionStack;
-(BOOL)hasEditingTransaction;
-(void)_decrementTransactionStack;
-(BOOL)synchronizesTextLayoutManagersAutomatically;
-(BOOL)synchronizeToBackingStore:(/*^block*/id)arg1 ;
-(BOOL)synchronizesToBackingStoreAutomatically;
-(id)textElementsForRange:(id)arg1 ;
-(void)performEditingTransactionWithBlock:(/*^block*/id)arg1 ;
-(void)recordEditActionInRange:(id)arg1 newTextRange:(id)arg2 ;
-(unsigned long long)maximumNumberOfUncachedElements;
-(void)setMaximumNumberOfUncachedElements:(unsigned long long)arg1 ;
-(void)setSynchronizesTextLayoutManagersAutomatically:(BOOL)arg1 ;
-(void)setSynchronizesToBackingStoreAutomatically:(BOOL)arg1 ;
-(id<NSTextContentManagerDelegate>)delegate;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<NSTextContentManagerDelegate>)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)offsetFromLocation:(id)arg1 toLocation:(id)arg2 ;
-(NSTextRange *)documentRange;
-(id)locationFromLocation:(id)arg1 offset:(long long)arg2 ;
-(BOOL)isCountableDataSource;
-(id)enumerateTextElementsFromLocation:(id)arg1 options:(long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)addTextLayoutManager:(id)arg1 ;
-(void)removeTextLayoutManager:(id)arg1 ;
-(BOOL)synchronizeTextLayoutManagers:(/*^block*/id)arg1 ;
-(void)replaceCharactersInRange:(id)arg1 withTextElements:(id)arg2 ;
-(void)dealloc;
@end

