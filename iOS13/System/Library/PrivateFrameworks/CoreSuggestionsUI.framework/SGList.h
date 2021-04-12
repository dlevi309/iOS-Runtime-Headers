/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
*/


@protocol SGListDelegate;
@class NSMutableArray;

@interface SGList : NSObject {

	id<SGListDelegate> _delegate;
	/*^block*/id _comparator;
	NSMutableArray* _array;

}

@property (nonatomic,retain) NSMutableArray * array;                          //@synthesize array=_array - In the implementation block
@property (assign,nonatomic,__weak) id<SGListDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) id comparator;                                     //@synthesize comparator=_comparator - In the implementation block
-(id)init;
-(unsigned long long)count;
-(NSMutableArray *)array;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(id<SGListDelegate>)delegate;
-(void)setDelegate:(id<SGListDelegate>)arg1 ;
-(void)setArray:(NSMutableArray *)arg1 ;
-(BOOL)removeItem:(id)arg1 ;
-(void)removeAllItems;
-(id)comparator;
-(id)items;
-(BOOL)addItem:(id)arg1 ;
-(id)itemAtIndex:(unsigned long long)arg1 ;
-(void)setComparator:(id)arg1 ;
-(unsigned long long)indexOfItem:(id)arg1 ;
@end

