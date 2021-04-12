/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)removeItem:(id)arg1 ;
-(BOOL)addItem:(id)arg1 ;
-(void)removeAllItems;
-(id)itemAtIndex:(unsigned long long)arg1 ;
-(void)setComparator:(id)arg1 ;
-(id)init;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(id<SGListDelegate>)delegate;
-(NSMutableArray *)array;
-(unsigned long long)count;
-(id)items;
-(id)comparator;
-(void)setDelegate:(id<SGListDelegate>)arg1 ;
-(unsigned long long)indexOfItem:(id)arg1 ;
-(void)setArray:(NSMutableArray *)arg1 ;
@end

