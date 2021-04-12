/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <CoreFoundation/NSEnumerator.h>

@protocol TSKModel;
@class NSMutableArray;

@interface TSKDocumentModelEnumerator : NSEnumerator {

	BOOL _stop;
	BOOL _filterBeforeAddingChildren;
	id<TSKModel> _root;
	NSMutableArray* _enumeratorStack;
	/*^block*/id _filter;

}

@property (nonatomic,retain) id<TSKModel> root;                             //@synthesize root=_root - In the implementation block
@property (nonatomic,retain) NSMutableArray * enumeratorStack;              //@synthesize enumeratorStack=_enumeratorStack - In the implementation block
@property (nonatomic,copy) id filter;                                       //@synthesize filter=_filter - In the implementation block
@property (assign,nonatomic) BOOL filterBeforeAddingChildren;               //@synthesize filterBeforeAddingChildren=_filterBeforeAddingChildren - In the implementation block
-(void)dealloc;
-(id)nextObject;
-(id<TSKModel>)root;
-(void)setRoot:(id<TSKModel>)arg1 ;
-(void)setFilter:(id)arg1 ;
-(id)filter;
-(id)initWithEnumerator:(id)arg1 filter:(/*^block*/id)arg2 ;
-(id)initWithRootModelObject:(id)arg1 filter:(/*^block*/id)arg2 ;
-(void)setFilterBeforeAddingChildren:(BOOL)arg1 ;
-(void)setEnumeratorStack:(NSMutableArray *)arg1 ;
-(NSMutableArray *)enumeratorStack;
-(void)enumerateUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)filterBeforeAddingChildren;
-(void)enumerateReferencedStylesUsingBlock:(/*^block*/id)arg1 ;
@end

