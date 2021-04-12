/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

#import <libobjc.A.dylib/NSTextElementProvider.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSTextContentManagerDelegate;
@class NSTextRange, NSMutableArray, NSTextLayoutManager, NSArray, NSString;

@interface NSTextContentManager : NSObject <NSTextElementProvider, NSSecureCoding> {

	NSMutableArray* _textLayoutManagers;
	NSTextLayoutManager* _primaryTextLayoutManager;
	AQ _transactionStack;
	NSMutableArray* _editHistory;
	BOOL _synchronizesTextLayoutManagersAutomatically;
	BOOL _synchronizesToBackingStoreAutomatically;
	id<NSTextContentManagerDelegate> _delegate;
	unsigned long long _maximumNumberOfUncachedElements;

}

@property (__weak) id<NSTextContentManagerDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (copy,readonly) NSArray * textLayoutManagers;                             //@synthesize textLayoutManagers=_textLayoutManagers - In the implementation block
@property (assign) NSTextLayoutManager * primaryTextLayoutManager; 
@property (assign) unsigned long long maximumNumberOfUncachedElements;              //@synthesize maximumNumberOfUncachedElements=_maximumNumberOfUncachedElements - In the implementation block
@property (readonly) BOOL hasEditingTransaction; 
@property (assign) BOOL synchronizesTextLayoutManagersAutomatically;                //@synthesize synchronizesTextLayoutManagersAutomatically=_synchronizesTextLayoutManagersAutomatically - In the implementation block
@property (assign) BOOL synchronizesToBackingStoreAutomatically;                    //@synthesize synchronizesToBackingStoreAutomatically=_synchronizesToBackingStoreAutomatically - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSTextRange * documentRange; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<NSTextContentManagerDelegate>)delegate;
-(void)setDelegate:(id<NSTextContentManagerDelegate>)arg1 ;
-(NSTextRange *)documentRange;
-(void)removeTextLayoutManager:(id)arg1 ;
-(void)addTextLayoutManager:(id)arg1 ;
-(id)enumerateTextElementsFromLocation:(id)arg1 options:(long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)synchronizeTextLayoutManagers:(/*^block*/id)arg1 ;
-(void)replaceCharactersInRange:(id)arg1 withTextElements:(id)arg2 ;
-(void)setPrimaryTextLayoutManager:(NSTextLayoutManager *)arg1 ;
-(NSArray *)textLayoutManagers;
-(NSTextLayoutManager *)primaryTextLayoutManager;
-(void)_incrementTransactionStack;
-(void)_decrementTransactionStack;
-(BOOL)hasEditingTransaction;
-(BOOL)synchronizesTextLayoutManagersAutomatically;
-(BOOL)synchronizesToBackingStoreAutomatically;
-(BOOL)synchronizeToBackingStore:(/*^block*/id)arg1 ;
-(id)textElementsForRange:(id)arg1 ;
-(void)performEditingTransactionWithBlock:(/*^block*/id)arg1 ;
-(void)addEditActionInRange:(id)arg1 newTextRange:(id)arg2 ;
-(unsigned long long)maximumNumberOfUncachedElements;
-(void)setMaximumNumberOfUncachedElements:(unsigned long long)arg1 ;
-(void)setSynchronizesTextLayoutManagersAutomatically:(BOOL)arg1 ;
-(void)setSynchronizesToBackingStoreAutomatically:(BOOL)arg1 ;
@end

