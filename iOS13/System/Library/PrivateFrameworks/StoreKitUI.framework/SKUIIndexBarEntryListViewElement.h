/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIViewElement.h>

@class NSString, NSArray;

@interface SKUIIndexBarEntryListViewElement : SKUIViewElement {

	BOOL _indexBarHiddenWhenEmpty;
	long long _entryListElementType;
	long long _minimumEntityCount;
	NSString* _targetIndexBarEntryID;

}

@property (nonatomic,copy,readonly) NSArray * childIndexBarEntryElements; 
@property (nonatomic,readonly) long long entryListElementType;                                             //@synthesize entryListElementType=_entryListElementType - In the implementation block
@property (getter=isIndexBarHiddenWhenEmpty,nonatomic,readonly) BOOL indexBarHiddenWhenEmpty;              //@synthesize indexBarHiddenWhenEmpty=_indexBarHiddenWhenEmpty - In the implementation block
@property (nonatomic,readonly) long long minimumEntityCount;                                               //@synthesize minimumEntityCount=_minimumEntityCount - In the implementation block
@property (nonatomic,copy,readonly) NSString * targetIndexBarEntryID;                                      //@synthesize targetIndexBarEntryID=_targetIndexBarEntryID - In the implementation block
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(BOOL)isIndexBarHiddenWhenEmpty;
-(long long)minimumEntityCount;
-(NSArray *)childIndexBarEntryElements;
-(NSString *)targetIndexBarEntryID;
-(long long)entryListElementType;
@end

